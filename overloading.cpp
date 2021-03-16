#include "_externalLibs.h"
#include "overloading.h"

//	Examples ------------------------------------

void overloadingExample1() {


}

void overloadingExample2(int i, bool b) {

	cout << "\n\tcalling Example2: 1st overloaded"<<endl;
}

void overloadinExample2(bool b, int i){

	cout << "\n\tcalling Example2: 2st overloaded"<<endl;
}

//	Errors, Exceptions, and fails ---------------

void overloadingError1() {

	double d = 1.;
	
	//f1(d);	// disabled due to the errors
}

void f1(int i) {cout << "\n\t" << i;}
void f1(float i) {cout << "\n\t" << i;}



//	Main function -------------------------------

void overloading() {

	bool b = true;
	int i = 1;

	overloadinExample2(b, i);
}


