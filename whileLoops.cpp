#include "_externalLibs.h"
#include "WhileLoops.h"

//	Examples	--------------------------------

void whileLoopsExample1() {

	bool flag = true;

	int i = 0;

	while (flag) {

		cout<<"\n\t" << i++;
		flag = i ^ 16;
	}
	cout << "\n";
}

void whileLoopsExample2(){

	bool flag = true;

	int i = 0;
	
	while (flag) if (++i == 100) break;
	

	cout << "\n\t flag\t" << (flag ? "true" : "false") << endl;
	cout << "\t i\t" << i << "\n\n";
}

void whileLoopsExample3(){
	
	int i = 1;

	while (++i){

		if ((i & 2) == 0)continue;
		
		cout << "\n\t" << i;

		if (i >= 100) return;
	}

	cout << "\n\ttako\t" << i << "\n\n";
}

void whileLoopsError1(){

	//while (); // disabled due to the mentioned errors
}

void whileLoopsError2(){

	/*bool flag;

	while (flag);*/ 
	// disabled due to the mentioned errors
}

void whileLoopsError3(){

	char flag[] = "a";

	while (flag){

		cout << "\n\n\t" << flag;
	}
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

	//whileLoopsExample1();
	//whileLoopsExample2();
	//whileLoopExample3();

	//whileLoopsExc1();
	//whileLoopsExc2();
	//whileLoopsExc3();
}