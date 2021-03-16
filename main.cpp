//#define LIL_GAME
#include "main.h"

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

	int menu = 10;

	switch (menu) {

	case 0: {
#include "types_fixedWidthIntegers.h"
		fixedInt();
		break;
	}

	case 1: {
#include "types_integerSigned.h"
		types_signedIntegrals();
		break;
	}

	case 2: {
#include "WhileLoops.h"
		whileLoops();
		break;
	}

	case 3: {
#include "forLoops.h"
		forLoops();
		break;
	}

	case 4: {
#include "switches.h"
		switches();
		break;
	}

	case 5: {
#include "arrays.h"
		arrays();
		break;
	}

	case 6: {
#include "arrays2D.h"
		arrays2D();
		break;
	}

	case 7: {
#include "strings.h"
		strings();
		break;
	}

	case 8: {

#include "newsAndDeletees.h"

		newsAndDeletees();

		cout << "\n\tinitialised by function\n\t\t" << *i<<endl;	

		*i = 191;

		cout << "\n\treinitialised by global statement\n\t\t" << *i<<endl;

		newsAndDeletees();

		cout << "\n\treinitialised by function again\n\n\t" << *i << endl;
	
		newsAndDeletees1();

		cout << "\n\tafter del local attempt\n\n\t" << *i << endl;
	}

	case 9: {
#include "overloading.h"

		overloading();
	}

	case 10: {
#include "constructDestruct.h"
		//constructDestruct();






	}

	default: break;
	}

	return 0;
}

#endif