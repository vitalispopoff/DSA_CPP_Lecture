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

void f(int i, bool b) {

	struct localTile {

		int index;
		bool value;
	};

	localTile l;
	l.index = i;
	l.value = b;
}

void structs() {

	f(1, 0);

	//localTile t; // this one doesn't work - localtile is local.



}