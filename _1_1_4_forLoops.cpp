#include <iostream>

using namespace std;




// 1. cout "Cabbage" 1000 times with a for loop
void forLoopsExc1(){

	for (int i = 1; i <= 1000; ++i) {

		cout << "Cabbage" << ", ";
		if (i % 10 == 0) cout << endl;
	}
}

// 2. say the alphabet using char and 'A' and 'Z'
void forLoopsExc2(){
	
	for (char c = 'A'; c <= 'Z'; ++c)
		cout << c << (c < 'Z' ? ", " : ".");
}

// 3. print out numbers from 50 to 100 that ain't divisible by 3
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