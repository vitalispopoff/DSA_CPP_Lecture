#include "WhileLoops.h"

#include <iostream>

using namespace std;



// 1. count to 100 with while loop.
void whileLoopsExc1() {

	int i = 0;

	while (i < 101)
		cout << "\t" << i++ << ",";

	cout << "\n";
}

// 2. count 45 to 0 in 5's with a do while loop.
void whileLoopsExc2() {

	int i = 45;

	do {

		cout << "\t" << i << ",\t";

		i -= 5;

	} while (i >= 0);
}


// 3. count the first 6 powers of 7.
void whileLoopsExc3() {

	int i = 1, number = 7;

	cout << "\n\n\t";

	while (i++ < 7) {

		cout << number << ",\t";

		number *= 7;
	}

	cout << "\n\n";
}


void whileLoops() {

	whileLoopsExc1();
	whileLoopsExc2();
	whileLoopsExc3();
}