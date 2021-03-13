#include "_externalLibs.h"
#include "arrays.h"

//	Examples	--------------------------------

void arraysExample1() {

	int
		a0 = 2,
		a1 = 5,
		a2 = 7,
		a3 = 4,
		a4 = 1;

	int a[5];

	a[0] = a0;
	a[1] = a1;
	a[2] = a2;
	a[3] = a3;
	a[4] = a4;

	a[4] = 0;

	cout << a4;
}

void arraysExample2() {

	int arr[] = { 0, 1, 2, 3, 4, 5 };

	cout << "\n\n";

	for(int i : arr)
		cout << "\t" << i << endl;

	cout << "\n";
}

void arraysExample3() {

	int arr[5] = { 1 };

	cout << "\n\n";

	for (int i : arr)
		cout << "\t" << i << endl;

	cout << "\n";
}

void arraysExample4() {

	int arr[5];

	cout << "\n\n";

	for (int i : arr)
		cout << "\t" << i << endl;

	cout << "\n";
}

void arraysExample5() {

	int arr[] = { 0, 1, 2, 3, 4, 5 };

	for (int i = 0; i < size(arr); ++i)
		cout << "\t" << arr[i] << endl;

	cout << "\n\n";

	for (int i : arr) cout << "\t" << i << endl;

	cout << "\n";
}

//	Errors, Exceptions, and fails --------------

void arraysErrors1() {

	//int arr[]; // disabled due to mentioned errors
}

void arraysErrors2(){

	//int arr[] = {}; // disabled due to mentioned errors
}

void arraysErors3(){

	int arr[] = { 1, 3, 5, 7, 9, 11 };

	int *p = arr;

	cout << "\n\n\t" << &arr << endl;
	cout << "\t" << p << "\n\n";
}

//	local main	--------------------------------

void arrays() {

	//arraysExample1();
	
	//arraysExample2();

	arraysExample4();

	//arraysExample23();
}