#include "_externalLibs.h"
#include "functionTemplates.h"



void functionTemplatesExample1() {

	cout << "\n\t-- Example  1 -------------------------------\n";

	class C {

	public:

		int getMin(int a, int b) {

			return a < b ? a : b;
		}

		double getMin(double a, double b) {

			return a < b ? a : b;
		}
	};

	C overloading;
	int a = 90;
	int b = 120;
	double c = 90.1;
	double d = 120.1;

	cout
		<< "\n\tgetMin int:\t" << overloading.getMin(a, b)
		<< "\n\tgetMin double:\t" << overloading.getMin(c, d)
		<< endl;
}

// declaration of a getMin function from example1
template<typename t1>
t1 templatedGetMin(t1 a, t1 b) {
	cout << "\nboink";
	return a < b ? a : b;
}

void functionTemplatesExample2() {

	cout << "\n\t-- Example  2 -------------------------------\n";

	int a = 90;
	int b = 120;
	double c = 90.1;
	double d = 120.1;
	char letter = 'a';
	char number = '9';
	bool truth = true;
	bool lie = false;

	cout << "\tints:\t" << templatedGetMin(a, b);
	cout << "\tdoubles:\t" << templatedGetMin(c, d);
	cout << "\tchars:\t" << templatedGetMin(letter, number);
	cout << "\tbools:\t" << templatedGetMin(truth, lie) << endl;
}

void functionTemplatesExample3() {

	cout << "\n\t-- Example  3 -------------------------------\n";

	int a = 90;
	bool truth = true;
	char letter = 'b';
	double b = -0.1 + (int)letter;

	cout << "\tint vs bool:\t" << templatedGetMin<double>(a, truth);
	cout << "\tdouble vs char\t" << templatedGetMin<char>(b, letter);
	cout << endl;
}

// declaration of swap function 
template<typename t2>
void templatedSwap(t2& a, t2& b) {

	t2 temporal = a;
	a = b;
	b = temporal;
}

void functionTemplatesExample4() {

	cout << "\n\t-- Example  4 -------------------------------\n";

	int a = 4;
	int b = 6;

	templatedSwap(a, b);

	cout
		<< "\n\ta:\t" << a
		<< "\n\tb:\t" << b
		<< endl;
}


class Point {

	double x, y;

public:

	Point(double x, double y) {
		this->x = x;
		this->y = y;
	}

	/*
	bool operator < (Point& b) {
		double dist1 = sqrt((x * x) + (y * y));
		double dist2 = sqrt((b.x * b.x) + (b.y * b.y));

		return dist1 < dist2;
	}
	*/

	/*redefinition of a '<' operator;
	skiping it will cause
	C2676 : binary '<': 'cl' does not define this operator or a conversion to a type acceptable to the predefined operator
	*/
	bool operator < (Point& b) {
		return (rand() & 1) == 0;
	}

	double getX() {
		return x;
	}

	double getY() {
		return y;
	}
};

template <class cl> cl classMin(cl a, cl b) {
	return a < b ? a : b;
}

void functionTemplatesExample5() {

	cout << "\n\t-- Example  5 -------------------------------\n";

	Point p1(78, 63.9);
	Point p2(671.3, 9.525);
	Point smaller = classMin(p1, p2);

	cout
		<< "\n\tsmaller:\t" << smaller.getX() << " ; " << smaller.getY() << endl;

}

template <typename t1, typename t2> bool multitypeTemplatedLess(t1 a, t2 b) {

	return a < b;
}

void functionTemplatesExample6() {

	cout << "\n\t-- Example  6 -------------------------------\n";

	bool truth = true;
	int five = 5;
	char letter = 'z';
	float phi = 0.618033989;

	cout
		<< "\n\ttruth vs five\t" << multitypeTemplatedLess(truth, five)
		<< "\n\tletter vs phi\t" << multitypeTemplatedLess(letter, phi)
		<< endl;
}

void functionTemplatesExample7() {

	cout << "\n\t-- Example  7 -------------------------------\n";

	bool truth = true;
	int five = 5;
	char letter = 'z';
	float phi = 0.618033989;

	cout
		<< "\n\ttruth vs five\t"
		<< multitypeTemplatedLess <float, bool>(truth, five)
		<< "\n\tletter vs phi\t"
		<< multitypeTemplatedLess <int, char>(letter, phi)
		<< endl;

}

template<typename t> t templatedMax(t a, t b) {

	static_assert(std::is_arithmetic<t>::value, "\n\t\tnah\n");
	return a > b ? a : b;
}

void functionTemplatesExample8() {

	cout << "\n\t-- Example  8 -------------------------------\n";

	int five = 5;
	double phi = 1.618;

	cout << "\n\tfive vs phi\t" << templatedMax<bool>(five, phi) << endl;
}

//general use template
template<typename t> t templatedFunction(t a, t b) {

	return (t)0;
}

//special case
template<> char templatedFunction(char a, char b) {

	cout << "\nboink!\n";
	return '\t';
}

void functionTemplatesExample9() {

	cout << "\n\t-- Example  9 -------------------------------\n";

	int a = 100;
	int b = 50;


	cout << "\n\t...\t" << templatedFunction(a, b) << endl;
	cout << "\n\t...\t|" << templatedFunction((char)a, (char)b)
		<< '|' << endl;
}

template<typename t1, typename t2> t1 templatedFunctionA(t1 a, t2 b) {

	return a < b ? a : b;
}

template<typename t2> bool  templatedFunctionA(bool a, t2 b) {

	return false;
}

void functionTemplatesExample10() {

	cout << "\n\t-- Example 10 -------------------------------\n";

	int five = 5;
	bool truth = true;

	cout << "\n\tfive vs truth\t" << templatedFunctionA(five, truth);
	cout << "\n\ttruth vs five\t" << templatedFunctionA(truth, five);
	cout << endl;
}

template<typename t> bool checkType(t a, t b) { return true; }
template<typename t1, typename t2> bool checkType(t1 a, t2 b) { return false; }

void functionTemplatesExample11() {

	cout << "\n\t-- Example 11 -------------------------------\n";

	int five = 5;
	int three = 3;
	bool truth = true;

	cout << "\n\tfive vs three\t" << checkType(five, three);
	cout << "\n\tfive vs truth\t" << checkType(five, truth) << endl;
}

	template<typename t, typename p> bool isLess(t a, p b) {

		return a.getMagnitude() < b.getMagnitude();
	}

	class Point2D {

	public:
		double x, y;

		Point2D(double x, double y) {
			this->x = x;
			this->y = y;
		}

		double getMagnitude() {
			return sqrt((x * x) + (y * y));
		}
	};

	class Point3D {

	public:
		double x, y, z;
		
		Point3D(double x, double y, double z) {

			this->x = x;
			this->y = y;
			this->z = z;
		}

		double getMagnitude() {
			return sqrt((x * x) + (y * y) + (z * z));
		}
	};

void functionTemplatesExample12() {

	cout << "\n\t-- Example 12 -------------------------------\n";

	Point2D p1 = Point2D(90, 23);
	Point3D p2 = Point3D(81, 91, 56);

	cout << "\n\t2D vs 3D\t" << isLess(p1, p2) << endl;

	int i1 = 0, i2 = 4;

	//cout << "\n\t int duel\t" << isLess(i1, i2) << endl; // disabled due to the error
}



/*{

	//template function to be called in a template function, rite?
	template<typename t1, typename t2> bool templatedBigger(t1 a, t2 b) {

		return signbit(b - a);
	}

	template<typename t2> bool templateBigger(bool a, t2 b) {

		return a && b != 0;
	}

}*/



void functionTemplates() {

	/*{

		functionTemplatesExample1();

		functionTemplatesExample2();

		functionTemplatesExample3();

		functionTemplatesExample4();

		functionTemplatesExample5();

		functionTemplatesExample6();

		functionTemplatesExample7();

		functionTemplatesExample8();

		functionTemplatesExample9();

		functionTemplatesExample10();

		functionTemplatesExample11();
	}*/

	functionTemplatesExample12();
}