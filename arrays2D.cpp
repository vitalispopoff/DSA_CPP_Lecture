#include "_externalLibs.h"
#include "arrays2D.h"


void arrays2D() {

	arrays2D_Example1();
	arrays2D_Example2();
}

// Examples	------------------------------------

void arrays2D_Example1() {

	int arr2D[3][2] = {
		{0, 1},
		{2, 3},
		{5}
	};
}

void arrays2D_Example2() {

	int arr2D[2][2] = { {0} };
}

void arrays2D_Example3() {

	int arr2D[][3] = {
		{0, 1, 2},
		{3, 4, 5}
	};
}

// Errors, Exceptions, and fails	---------------

void arrays2D_Error1() {

	/*int arr2D[][] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};*/
	// disabled due to the mentioned errors
}
	