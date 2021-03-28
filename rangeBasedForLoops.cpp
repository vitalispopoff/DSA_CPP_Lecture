#include "_externalLibs.h"
#include "rangeBasedForLoops.h"
#include <vector>

void rangeBasedForLoopsExample01() {

	cout << "\n -- Example  1 ------------------------\n";

	int arr[] = { 1, 2, 3, 4, 5 };

	cout << "\n\t";

	for (int i : arr)
		cout << i << " , ";

	cout << endl;

	cout << endl;
}

void rangeBasedForLoopsExample02() {

	cout << "\n -- Example  2 ------------------------\n";

	double arr[] = { 1., 2., 3., 4., 5. };

	cout << "\n\t";

	for (auto i : arr)
		cout << i << " , ";

	cout << endl;

	cout << endl;
}

void rangeBasedForLoopsExample03() {

	cout << "\n -- Example  3 ------------------------\n";

	vector<int> arr = { 1, 2, 3, 4, 5 };

	cout << "\n\t";

	for (auto i : arr)
		cout << i << " , ";

	cout << endl;

	arr.push_back(6);

	cout << "\n\t";

	for (auto i : arr)
		cout << i << " , ";

	cout << endl;


}

void rangeBasedForLoopsExample04() {

	cout << "\n -- Example  4 ------------------------\n";

	vector<int> arr = { 1, 2, 3, 4, 5 };

	cout << "\n\t";

	for (auto i : arr)
		cout << (i << i) << " , ";

	cout << "\n\n\t";

	for (auto i : arr)
		cout << i << " , ";

	cout << endl;

}


void rangeBasedForLoopsExample05() {

	cout << "\n -- Example  5 ------------------------\n";

	vector<int> arr = { 1, 2, 3, 4, 5 };

	arr.push_back(6);


	for (auto& i : arr)
		i <<= i;

	cout << "\n\t";
	
	for (auto i : arr)
		cout << i << " , ";

	cout << endl;

}

void rangeBasedForLoopsExample06(){

	cout << "\n -- Example  6 ------------------------\n";

	int* arr = new int[5];

	arr = { 0 };

	//for (int i : arr); // disabled due to multiple errors
}




void rangeBasedForLoops() {

	rangeBasedForLoopsExample01();

	rangeBasedForLoopsExample02();

	rangeBasedForLoopsExample03();

	rangeBasedForLoopsExample04();

	rangeBasedForLoopsExample05();

	//rangeBasedForLoopsExample06();
}
