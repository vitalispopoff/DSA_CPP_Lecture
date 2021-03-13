#include "main.h"

int main() {

	int menu = 1;

	switch (menu) {

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

		case 4:{
	#include "switches.h"
			switches();
			break;
		}

		case 5:{
	#include "arrays.h"
			arrays();
			break;
		}
	}

	return 0;
}