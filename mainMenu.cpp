#include "main.h"

void mainMenu(int menu) {

	switch (menu) {

		// 0 :	basic dictionary

	case 0x00: {
#include "reservedNames.h"
		break;
	}

	case 0x01: {
#include "operators.h"
		break;
	}

			 // 1 :	data types

	case 0x10: {
#include "types_fixedWidthIntegers.h"
		fixedInt();
		break;
	}

	case 0x11: {
#include "types_integerSigned.h"
		types_signedIntegrals();
		break;
	}

			 // 2 :	data basic structures

	case 0x20: {
#include "arrays.h"
		arrays();
		break;
	}

	case 0x21: {
#include "arrays2D.h"
		arrays2D();
		break;
	}

	case 0x22: {
#include "strings.h"
		strings();
		break;
	}

			 // 3 :	syntax basic elements

	case 0x30: {
#include "WhileLoops.h"
		whileLoops();
		break;
	}

	case 0x31: {
#include "forLoops.h"
		forLoops();
		break;
	}

	case 0x32: {
#include "switches.h"
		switches();
		break;
	}

	case 0x33: {

#include "newsAndDeletees.h"

		newsAndDeletees();
	}

	case 0x34: {
#include "overloading.h"

		overloading();
	}

			 // 4 :	objectivity

	case 0x40: {
#include "classes.h"
		classes();
		break;
	}

	case 0x41: {
#include "inheritance.h"
		inheritance();
		break;
	}

			 // F :	snippets

	case 0xF0: {
#include "calculator.h"
		break;
	}

	case 0xF1: {
#include "aLilGame.h"
		break;
	}

			 //	default

	default: break;

	}
}