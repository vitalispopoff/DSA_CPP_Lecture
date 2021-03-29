#include "_externalLibs.h"
#include <ctime>
#include <stdlib.h>

struct mapTile {

	char tileCharacter;
	bool walkable;

};

struct point {

	int x, y;
}playerPos;
// playerPos is an immediate declaration of the struct.

int const mapWidth = 60;
int	const mapHeight = 20;
int restarts = 0;
int steps = 0;
int record = max(record, steps);

bool combo = true;

mapTile map[mapWidth][mapHeight];

void generateMap() {

	//pseudo-random number generator based on the copmuters clock - epoch time?
	srand(time(NULL));

	for (int y = 0; y < mapHeight; ++y)
		for (int x = 0; x < mapWidth; ++x) {

			int t = (int)(rand() & 1);

			map[x][y].walkable = t;
			//map[x][y].tileCharacter = '#' + t * 11;	// '#' is 35, '.' is 46.
			map[x][y].tileCharacter = (char) t ?  32 : 219;
		}

	map[0][0].walkable = true;
	map[0][0].tileCharacter = (char) 32;
}

void printMap() {

	//	clean the console
	printf("\033c");

	for (int y = 0; y < mapHeight; ++y) {

		cout << endl;

		for (int x = 0; x < mapWidth; ++x) {

			//char c = map[x][y].tileCharacter + ((playerPos.x == x) * (playerPos.y == y) * map[x][y].walkable * 32);

			char c = playerPos.x == x && playerPos.y == y && map[x][y].walkable ? 64 : map[x][y].tileCharacter;

			cout << c;
		}
	}

	cout << endl;
}

//	torus topology
bool move() {

	char direction;

	cin >> direction;

	switch (direction) {

		/* cases can't operate in strictly arithmetic regime, because,
		as player.Pos equal to the border fields would result in searching for fields outside the mapTile.
		&& prevents it as it firstly checks the playerPos condition.
		*/

		//n y--;
	case 'n': {
		if (playerPos.y == 0 && map[playerPos.x][mapHeight - 1].walkable)playerPos.y = mapHeight - 1;
		else
			playerPos.y -= (playerPos.y > 0 && map[playerPos.x][playerPos.y - 1].walkable);
		break;
	}
			//s y++;
	case 's': {
		if (playerPos.y == mapHeight - 1 && map[playerPos.x][0].walkable) playerPos.y = 0;
		else
			playerPos.y += (playerPos.y < mapHeight - 1) && (map[playerPos.x][playerPos.y + 1].walkable);
		break;
	}

			//e x++;
	case 'e': {
		if (playerPos.x == mapWidth - 1 && map[0][playerPos.y].walkable) playerPos.x = 0;
		else
		playerPos.x += (playerPos.x < mapWidth - 1) && (map[playerPos.x + 1][playerPos.y].walkable);
		break;
	}

			//w x--;
	case 'w': {
		if (playerPos.x == 0 && map[mapWidth - 1][playerPos.y].walkable) playerPos.x = mapWidth - 1;
		else
		playerPos.x -= (playerPos.x > 0) && (map[playerPos.x - 1][playerPos.y].walkable);
		break;
	}

	case 'r': 
	{
		playerPos.x = playerPos.y = 0;
		generateMap(); 
		break;
	}

	case 'q':;

	default: {
		return false;
	}
	}

	return true;
}

	char action;

void aLilGame() {

	playerPos.x = playerPos.y = 0;

	generateMap();

	bool flag = true;

	while (flag)
	{
		printMap();

		flag = move();
	}
}