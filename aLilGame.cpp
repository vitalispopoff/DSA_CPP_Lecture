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

int const mapWidth = 10;
int	const mapHeight = 10;

bool combo = true;

mapTile map[mapWidth][mapHeight];

void generateMap() {

	//pseudo-random number generator based on the copmuters clock - epoch time?
	srand(time(NULL));

	for (int y = 0; y < mapHeight; ++y)
		for (int x = 0; x < mapWidth; ++x) {

			int t = (int)(rand() & 1);

			map[x][y].walkable = t;
			map[x][y].tileCharacter = '#' + t * 11;	// '#' is 35, '.' is 46.
		}

	map[0][0].walkable = true;
	map[0][0].tileCharacter = '.';
}

void printMap() {

	//	clean the console
	printf("\033c");

	for (int y = 0; y < mapHeight; ++y) {

		cout << endl;

		for (int x = 0; x < mapWidth; ++x){

			char c = map[x][y].tileCharacter + ((playerPos.x == x) * (playerPos.y == y) * map[x][y].walkable * 18);

			cout <<  c;
		}
	}

	cout << endl;
}

void move() {

	char direction;

	cin >> direction;

	switch (direction) {

		/* cases can't operate in strictly arithmetic regime, because, 
		as player.Pos equal to the border fields would result in searching for fields outside the mapTile.
		&& prevents it as it firstly checks the playerPos condition.
		*/

	//n y--;
	case 'n': {
		playerPos.y -= (playerPos.y > 0 && map[playerPos.x][playerPos.y - 1].walkable); 
		break;
	}

	//s y++;
	case 's': {
		playerPos.y += (playerPos.y < mapHeight - 1) && (map[playerPos.x][playerPos.y + 1].walkable); 
		break;
	}

	//e x++;
	case 'e': {
		playerPos.x += (playerPos.x < mapWidth - 1) && (map[playerPos.x + 1][playerPos.y].walkable); 
		break;
	}

	//w x--;
	case 'w': {
		playerPos.x -= (playerPos.x > 0) && (map[playerPos.x - 1][playerPos.y].walkable); 
		break;
	}

	case 'q':;

	default: break;
	}
}


void lilGame() {

	playerPos.x = playerPos.y = 0;
	char action;

	generateMap();

	printMap();

	move();

	printMap();

	move();

	printMap();

	move();

	printMap();
}