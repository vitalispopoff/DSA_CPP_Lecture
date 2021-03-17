#include "_externalLibs.h"
#include "classes.h"

// Examples ------------------------------------

class ExampleClass1 {

public:

	char c = 165;

	ExampleClass1();
};

// Examples-------------------------------------

ExampleClass1::ExampleClass1() {

	cout << "\n\t"<<"ExampleClass1 constructor successfully called."<< endl;
}

void classesExample1() {

	char* ref;

	{
		ExampleClass1 e = ExampleClass1();

		cout << "\n\te.c :\t" << e.c << endl;

		ref = &e.c;

	cout << "\n\te.c adr :\t" << (uintptr_t) ref << endl;

	cout << "\n\tref :\t" << *ref << endl;

	e.~ExampleClass1();
	}

	cout << "\n\t----------scope closed----------" << endl;
	
	//cout << "\n\te.c :\t" << e.c << endl;	// disabled due to an error

	cout << "\n\tref :\t" << *ref << endl;
}









void classes() {

	classesExample1();
}