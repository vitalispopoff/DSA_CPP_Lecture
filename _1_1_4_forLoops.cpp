#include "_externalLibs.h"
#include "forLoops.h"


//	Examples	--------------------------------

void forLoopsExample0() {

	int i = 0;

	cout << "\n\n";

	for (;;) {

		if (i++ > 2) break;
		else cout << "\n\t current i : " << i;
	}

	cout << "\n\n";
}

void forLoopsExample1() {

	for (int i = 0; i < 101; i += 2)
		cout << i << ", ";
}


//	Excercises	--------------------------------

void forLoopsExc1(){

	for (int i = 1; i <= 1000; ++i) {

		cout << "Cabbage" << ", ";
		if (i % 10 == 0) cout << endl;
	}
}

void forLoopsExc2(){
	
	for (char c = 'A'; c <= 'Z'; ++c)
		cout << c << (c < 'Z' ? ", " : ".");
}

void forLoopsExc3(){

	for (int i = 50; i <= 100; ++i) {

		if (i % 3 > 0) cout << i << (i == 100 ? "." : ", ");
	}
}

//	local main	--------------------------------

void forLoops() {

	


	forLoopsExc1();

	forLoopsExc2();

	forLoopsExc3();
}