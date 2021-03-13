#include "_externalLibs.h"
#include "switches.h"

//	Examples	--------------------------------

double switchesExample0() {

	int
		condition = 0;

	cin >> condition;

	switch (condition) {

	case 1: {
		cout << condition << endl;
		return condition * 1.2;
	}

	case 2: {
		cout << condition << " in 2 \n";
		condition--;
	}

	default: {

		cout << "default\n";
		return condition;
	}
	}
}

void switchesExample1() {

	int userOption;

	while ((userOption = -1) != 0) {
		cout << "\n\tMain Menu\n";
		cout << "\n\t1.\tNew File\n";
		cout << "\n\t2.\tOpen File\n";
		cout << "\n\t3.\tSave File\n";
		cout << "\n\t4.\tClose File\n";
		cout << "\n\t0.\tExit\n";

		cin >> userOption;

		switch (userOption) {

		case 0: break;
		case 1: cout << "newFile()"; break;
		case 2: cout << "openFile()"; break;
		case 3: cout << "saveFile()"; break;
		case 4: cout << "closeFile()"; break;
		default: cout << "Non valid option chosen, try again.\n";
		}
	}
}

void switchesExample2() {

	int j = 0;

	switch (j) {

	case 0: cout << "0. j = " << j << endl;
	case 1: cout << "1. j = " << j << endl;
	case 2: cout << "2. j = " << j << endl;
	default: cout << "default" << endl;
	}
}

void switchesExample3() {

	int i;

	cin >> i;

	switch (i) {

	case 0: return;
	case 1: cout << i;
	case 2: cout << "2";  return;
	case 3: cout << i;
	case 4: return;
	default:cout << i;
	}

}

void switchesExample4() {

	cout << "\n\tChoose your option (0 - 9).\n";
	int j;

	cin >> j;

	switch (j) {

	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	default: cout << "\n\tOption currently unavailable.\n\tPlease try again later.\n";
	}
}

//	local main	--------------------------------

void switches() {

	switchesExample4();
}