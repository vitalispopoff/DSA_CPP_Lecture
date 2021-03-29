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

bool ascending(float a, float b) {return a < b; }
bool descending(float a, float b) {return b < a; }

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

void fp01Example06() {

	typedef float(*functionPointer)(float&, float);
	functionPointer operationTable[] = {
		[](float& a, float) {return a; },
		[](float& a, float b) {return a + b; } ,
		[](float& a, float b) {return a - b; } ,
		[](float& a, float b) {return a * b; } ,
		[](float& a, float b) {return a / b; }
	};

	float input[3] = { 0.0 };
	string output[3] = {
		"\n\tchoose value#1\t",
		"\n\tchoose value#2\t",
		"\n\tchoose an operation:\tadd : 1 | sub : 2 | mul : 3 | div : 4\t"
	};

	for (int i = 0; i < 3; ++i) {
		cout << output[i];
		cin >> input[i];
	};

	cout << "\n\tresult\t" << operationTable[(int)input[2] % 5](input[0], input[1]) << endl;
}

int aFunction(int a) { return a <<= a; }

void fp01Example07() {

	int (*aFunctionPointer) (int) = aFunction;
	unsigned char* cPtr = (unsigned char*)aFunctionPointer;
	int a = aFunction(1);

	cout << "\n\t";

	for (int i = 0; i < 10; ++i) cout << (hex) << (int)*cPtr++ << ' ';

	cout << endl;
}

void functionPointers01() {

	//fp01Example01();

	//fp01Example02();

	//fp01Example03();

	//fp01Example04();

	//fp01Example05();

	fp01Example06();

	//fp01Example07();
}