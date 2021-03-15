#include "_externalLibs.h"

/* declaration of a structure.
*/
struct mapTile {
	
	//these struct variables are indeed public-like
	char tileCharacter;
	bool walkable;
};

/*initialization of a mapTile structure called m
this one's a global 
*/
mapTile m;

/*just by the way constants ...*/
int const mapWidth = 10;
int	const mapHeight = 10;
	

/* these obviously may be declared into arrays
*/
mapTile map[10][10];

void structs() {



}