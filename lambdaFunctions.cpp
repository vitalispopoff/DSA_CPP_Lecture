#include "_externalLibs.h"
#include "lambdaFunctions.h"
#include <algorithm>	// because of 'for_each'
#include <functional>
#include <vector>


void lambdaFunctionsExample01() {

	// the simplest lambda ever. does one thing: compiles.
	[]() {};
}

void lambdaFunctionsExample02() {


	cout << "\n -- Example  2  ---------------------------------------\n";

	auto sayHello = []() {cout << "\n\tHello World.\n"; };

	sayHello();

	/*looks like lambda is the way to declare a function within a function*/
//	void anotherSayHello() {cout << "\n\tHello again.\t"; } // this doesn't work

}

void lambdaFunctionsExample03() {

	cout << "\n -- Example  3  ---------------------------------------\n";

	auto f = [](int a, int b) {
		return a + b;
	};


	cout << "\n\t" << f(3, 5) << endl;
}

void lambdaFunctionsExample04() {

	cout << "\n -- Example  4  ---------------------------------------\n";

	auto i = [](int a, int b) -> double {

		return ((float)(a + b) / 2.f);
	};

	cout << "\n\t" << typeid(i(1, 2)).name() << endl;
}

void lambdaFunctionsExample05() {

	cout << "\n -- Example  5  ---------------------------------------\n";

	int i = 1;

	//auto lambda1 = []() {return i;}; // disabled due to the error

	auto lambda2 = [i]() {return i; };

	cout << "\n\tLadies and Gentlemen. Please welcome: lambda 2 !\n\n\t" << lambda2() << endl;
}

void lambdaFunctionsExample06() {

	cout << "\n -- Example  6  ---------------------------------------\n";

	int width = 210;
	int length = 297;

	//auto resizeWidth = [width](int times) {width *= times; }; // disabled due to the errors

	auto resizeLength = [&length](int times) {length *= times; };

	cout << "\n\tbefore\t" << length;

	resizeLength(2);

	cout << "\n\tafter\t" << length << endl;

}

void lambdaFunctionsExample07() {

	cout << "\n -- Example  7  ---------------------------------------\n";

	int
		i = 10,
		j = 11;

	auto l1 = [=](){return i + j; };

	cout << "\n\t" << l1();

	cout << "\n\ti\t" << i << endl;

	auto l2 = [&] {++i; }; // we didn't enclose () , yet it worked too

	l2();

	cout << "\n\ti\t" << i << endl;
}

void lambdaFunctionsExample08(){

	cout << "\n -- Example  8  ---------------------------------------\n";

	int a = 1;
	int b = 2;

	auto l1 = [&, b] {

		return a <<= b;
	};

	auto l2 = [=, &a] {

		//return a >>= --b; // decrementation doesn't work for 'b' here
		return a >>= b;
	};

	cout << "\n\ta\t" << a;
	cout << "\n\tl1\t" << l1();
	cout << "\n\ta\t" << a;
	cout << "\n\tl2\t" << l2();
	cout << "\n\ta\t" << a << endl;
}

void lambdaFunctionsExample09() {

	cout << "\n -- Example  9  ---------------------------------------\n";

	vector<int> arr = { 1, 2, 3, 4, 5 };
	double total = 0;

	std::for_each(
		begin(arr),
		end(arr),
		[&](int x) {total += x; }
	);

	cout << "\n\ttotal\t" << total << endl;
}

void lambdaFunctionsExample10(){

	cout << "\n -- Example 10  ---------------------------------------\n";

	struct Point { 
		
		double x, y; 

		Point() {

			auto r = []{return (rand() % 10000) - 5000; };

			x = r();
			y = r();
		}
		void print() {cout << '[' << x << " , " << y << ']'; }
	};

	int count = 100;
	vector<Point> points;
	
	for (int i = 0; i < count; ++i) points.push_back(Point());

	cout << "\n\tunsorted points:\n\t";

	for (int i = 0; i < count; ++i) {

		points[i].print();
	
		cout << (i % 10 == 9 ? "\n\t" : "\t");	
	}

	std::sort(
		points.begin(),
		points.end(),
		[](const Point& a, const Point& b){
			auto distance = [](auto& p) {return p.x * p.x + p.y * p.y; };
			return distance(a) < distance(b);}
	);

	cout << "\n\tsorted points\n\t";

	for (int i = 0; i < count; ++i) {

		points[i].print();
		cout << (i % 10 == 9 ? "\n\t" : "\t");	
	}

}

void operate(std::function<void()> f) {

	f();
}

void lambdaFunctionsExample11(){

	cout << "\n -- Example 11  ---------------------------------------\n";

	int i = 100;
	auto funk = [&]{++i; };

	operate(funk);

	cout << "\n\t" << i << endl;
}

void lambdaFunctions() {

	//lambdaFunctionsExample01();

	//lambdaFunctionsExample02();

	//lambdaFunctionsExample03();

	//lambdaFunctionsExample04();

	//lambdaFunctionsExample05();

	//lambdaFunctionsExample06();

	//lambdaFunctionsExample07();

	//lambdaFunctionsExample08();

	//lambdaFunctionsExample09();

	//lambdaFunctionsExample10();

	lambdaFunctionsExample11();
}