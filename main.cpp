//#define LIL_GAME
#include "main.h"

	int menu = 10;

#ifdef LIL_GAME

int main() {
#include "aLilGame.h"

	lilGame();

	//char c;
	//cin >> c;

	return 0;
}

#else

int main() {

	//mainMenu(menu);

	return 0;
}

#endif