#include <iostream>

using namespace std;



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



void forLoops() {

	for (int i = 0; i < 101; i += 2)
		cout << i << ", ";


	forLoopsExc1();
	forLoopsExc2();
	forLoopsExc3();
}