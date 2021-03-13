#include "_externalLibs.h"
#include "WhileLoops.h"

//	Examples	--------------------------------

void whileLoopsExample() {

}

//	Excercises	--------------------------------

void whileLoopsExc1() {

	int i = 0;

	while (i < 101)
		cout << "\t" << i++ << ",";

	cout << "\n";
}

void whileLoopsExc2() {

	int i = 45;

	do {

		cout << "\t" << i << ",\t";

		i -= 5;

	} while (i >= 0);
}

void whileLoopsExc3() {

	int i = 1, number = 7;

	cout << "\n\n\t";

	while (i++ < 7) {

		cout << number << ",\t";

		number *= 7;
	}

	cout << "\n\n";
}

//	local main	--------------------------------

void whileLoops() {

	whileLoopsExc1();
	whileLoopsExc2();
	whileLoopsExc3();
}