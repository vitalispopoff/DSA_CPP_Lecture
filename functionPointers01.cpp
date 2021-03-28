#include "_externalLibs.h"
#include "functionPointers01.h"
#include <algorithm>
#include <vector>

int add1(int a, int b) { return a + b; }
int sub1(int a, int b) { return a - b; }

void fp01Example01() {

	typedef int (*FunctionPointer)(int, int);

	FunctionPointer fp1 = add1;
	FunctionPointer fp2 = sub1;
}

void fp01Example02() {

	typedef int (*FunctionPointer)(int, int);

	FunctionPointer fp1 = add1;
	FunctionPointer fp2 = sub1;

	FunctionPointer functionArray1[] = { fp1, fp2 };
	FunctionPointer functionArray2[] = { add1, sub1 };
}

float add(float a, float b) { return a + b; }

void fp01Example03() {

	int count = 10;
	vector<float> a, b, c(count);
	auto gen = [](auto v) { v.push_back(rand()); }; //using lambda function
	auto lazy = [](auto v1, auto v2) {return add(v1, v2); };

	for (int i = 0; i < count; ++i) {

		a.push_back(rand());
		b.push_back(rand());
		//gen(a);
		//gen(b);
	}

	transform(
		a.begin(), a.end(), // for each a element
		b.begin(),			// take respective b element
		c.begin(),			// and respective c element
		//add					// and after processing both first using pointed function write down as the last one
		lazy				// we can point to the function with lambda too
	);


	for (auto d : c)
		cout << "\n\t" << d;

}


bool ascending(float a, float b) {
	return a < b;
}

bool descending(float a, float b) {
	return b < a;
}

void fp01Example04() {

	int count = 10;
	vector<float> a;

	for (int i = 0; i < count; ++i) a.push_back(rand());

	cout << "\n\tunsorted:\t";
	for (double d : a) cout << d << " , ";

	sort(
		a.begin(),
		a.end(),
		ascending		// again this is a function pointer used as a input variable for another function
	);

	cout << "\n\tsorted:\t\t";
	for (double d : a) cout << d << " , ";
	cout << endl;
}

void fp01Example05() {

	int count = 10;
	vector<float> a;

	for (int i = 0; i < count; ++i) a.push_back(rand());

	cout << "\n\tunsorted:\t";
	for (double d : a) cout << d << " , ";

	sort(
		a.begin(),
		a.end(),
		[](double d1, double d2) {return d1 < d2; }	// the function pointer could be replaced with a lambda.
	);

	cout << "\n\tsorted:\t\t";
	for (double d : a) cout << d << " , ";
	cout << endl;
}

float nop(float dest, float src) { return dest; }
float add2(float dest, float src) { return dest + src; }
float sub2(float dest, float src) { return dest - src; }
float mul2(float dest, float src) { return dest * src; }
float div2(float dest, float src) { return dest / src; }


void fp01Example06() {

	//auto idle = [](float dst, float src) { return dst; };
	//auto add2 = [](float dst, float src) {return dst + src; };
	//auto sub2 = [](float dst, float src) {return dst - src; };


		typedef float (*functionPointer)(float, float);
	functionPointer operationTable[] = { nop, add2, sub2, mul2, div2 };
	double val1 = 0.0f, val2 = 0.0f;

	cout << "\n\tchoose value#1\t";
	cin >> val1;
	cout << "\n\tchoose a value#2\t";
	cin >> val2;
	cout << "\n\tchoose an operation:\tadd : 1 | sub : 2 | mul : 3 | div : 4\n";

	int op;

	cin >> op;
	cout << "\n\tresult\t" << operationTable[op % 5](val1, val2) << endl;
}


void functionPointers01() {

	//fp01Example01();

	//fp01Example02();

	//fp01Example03();

	//fp01Example04();

	//fp01Example05();

	fp01Example06();
}

