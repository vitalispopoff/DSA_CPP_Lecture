//#include "main.h"

int main() {

	int menu = 7;

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
	}

	return 0;
}