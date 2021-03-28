#include "main.h"

void mainMenu(int menu) {

	switch (menu) {

		// 0 :	basic dictionary

			  // reserved names
	case 0x000: {
#include "reservedNames.h"
		break;
	}
			  // operators
	case 0x010: {
#include "operators.h"
		break;
	}
			  // indirection
	case 0x0F0: {
#include "indirection.h"
		indirection();
		break;
	}

			  // 1 :	data types
			  // fixed width integers
	case 0x110: {
#include "types_fixedWidthIntegers.h"
		fixedInt();
		break;
	}
			  // signed integers
	case 0x111: {
#include "types_integerSigned.h"
		types_signedIntegrals();
		break;
	}
			  // structs
	case 0x1E0: {
#include "structs.h"
		structs();
	}
			  // unions
	case 0x1E1: {
#include "unions.h"
		unions();

	}


	case 0x1F0: {
#include "functionPointers.h"
		functionPointers();
		break;

	}

			  // 2 :	data basic structures

			  // strings
	case 0x200: {
#include "strings.h"
		strings();
		break;
	}
			  // arrays
	case 0x210: {
#include "arrays.h"
		arrays();
		break;
	}
			  // 2d arrays
	case 0x211: {
#include "arrays2D.h"
		arrays2D();
		break;
	}
			  // vectors
	case 0x220: {
		break;
	}

			  // 3 :	syntax basic elements

			  // while loops
	case 0x300: {
#include "WhileLoops.h"
		whileLoops();
		break;
	}
			  // for loops
	case 0x310: {
#include "forLoops.h"
		forLoops();
		break;
	}
			  // ranged for loops
	case 0x311: {
#include "rangeBasedForLoops.h"
		rangeBasedForLoops();
		break;
	}
			  // switches
	case 0x320: {
#include "switches.h"
		switches();
		break;
	}
			  // lambda functions
	case 0x330: {
#include "lambdaFunctions.h"
		lambdaFunctions();
		break;
	}

	case 0x380: {

#include "newsAndDeletees.h"

		newsAndDeletees();
	}

	case 0x390: {
#include "overloading.h"

		overloading();
	}

			  // 4 :	objectivity

	case 0x400: {
#include "classes.h"
		classes();
		break;
	}

	case 0x410: {
#include "inheritance.h"
		inheritance();
		break;
	}

			  // 5 :	preprocessor directives

	case 0x500: {
#include "define.h"
		define();
		break;
	}

			  // F :	snippets

	case 0xF00: {
#include "calculator.h"
		break;
	}

	case 0xF10: {
#include "aLilGame.h"
		break;
	}

			  //	default

	default: break;

	}
}