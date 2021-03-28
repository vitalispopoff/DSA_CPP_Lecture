#include "_externalLibs.h"
#include "functionPointers.h"

int add(int a, int b) {

	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

void f1() {
	cout << "\n\tf1 called\n";
}

void callFunction(void (*functionPointer)()) {

	functionPointer();
}

void functionPointersExample1() {

	//cout << "\n\t Example 1 ------------------------------\n";

	/*{
		int (*functionPointer) (int, int);
		functionPointer = add;

		cout << "\n\t" << functionPointer(0, 0) << endl;
	}*/

	/*{
		int (*functionPointer) (int, int) = add;

		cout << "\n\t" 
			<< (*functionPointer)(0, 0) // calling with * in () doesn't make a difference, it's just easier to read.
			<< endl;
	}*/


	/*{
		typedef int (*FunctionPointer)(int, int);	// another way to declare is with typedef
		FunctionPointer fp1 = add;
		FunctionPointer fp2 = sub;
	}*/

}

void functionPointersExample2() {

	cout << "\n\t Example 2 ------------------------------\n";

	cout << "\n\t functionPointersExample1() addres : \n\t\t"
		<< functionPointersExample1
		<< "\n\t and with ampersand : \n\t\t"
		<< &functionPointersExample1 << endl;
}

void functionPointersExample3() {

	cout << "\n\t Example 3 ------------------------------\n";

	int (*functionPointer)(int, int);

	functionPointer = add;

	cout << "\n\t add works : " << functionPointer(606, 303) << endl;
}

void functionPointersExample4() {

	cout << "\n\t Example 4 ------------------------------\n";

	callFunction(f1);
}



double sum(double input1, double input2) {

	return input1 + input2;
}

double product(double input1, double input2) {

	return input1 * input2;
}

void functionPointersExcercise1() {

	cout << "\n\t Excercise 1 ----------------------------\n";

	cout << "\n\t sum addr :\t" << sum
		<< "\n\t product addr:\t" << &product
		<< endl;
}

void functionPointersExcercise2() {

	cout << "\n\t Excercise 2 ----------------------------\n";

	double (*functionPointer)(double, double) = &sum;

	cout << "\n\t sum(1.5, -0.5):\t" << functionPointer(1.5, -0.5);

	functionPointer = &product;

	cout << "\n\t product(1.5, -0.5):\t" << functionPointer(1.5, -0.5)
		<< endl;
}

void functionPointersExcercise3() {

	cout << "\n\t Excercise 3 ----------------------------\n";

	double
	(*sumPnt)(double, double) = &sum,
		(*productPnt)(double, double) = &product;

	cout << "\n\t" << sumPnt(productPnt(1.5, -0.5), productPnt(0.1111, -9.09)) << endl;
}

double callFunction(double (*functionPointer)(double, double), double input1, double input2) {

	return functionPointer(input1, input2);
}

void functionPointersExcercise4() {

	cout << "\n\t Excercise 4 ----------------------------\n";

	cout << "\n\tcall f:\t" << callFunction(&sum, 1.0, -0.5) << endl;
}

void functionPointers() {

	//functionPointersExample1();

	functionPointersExample2();

	functionPointersExample3();

	functionPointersExample4();


	functionPointersExcercise1();

	functionPointersExcercise2();

	functionPointersExcercise3();

	functionPointersExcercise4();
}