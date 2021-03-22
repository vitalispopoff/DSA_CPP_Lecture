#include "_externalLibs.h"
#include "define.h"

// Examples -----------------------------------

void defineExample1() {

#ifndef WHATEVAH
#define WHATEVAH

	// atcual code

#endif

	cout << "\n Example 1 ------------------------------------\n";

}

void defineExample2() {

	cout << "\n Example 2 ------------------------------------\n";

# define _temporal 100

	char c = _temporal + 0;

	string s = "_temporal";	// this is said to not work

	cout << "\n\tc : " << c
		<< "\n\ts : " << s
		<< endl;
}

void defineExample3() {

	cout << "\n Example 3 ------------------------------------\n";

#define _TEMP (4 >> 2)

	int i = _TEMP + 3;

	cout << "\n\tresult: " << i << endl;
}

void defineExample4() {

	cout << "\n Example 4 ------------------------------------\n";

#define panic(x, y) x > y ? x >> y : x << y

	double d = panic(48, 1);	// can't be floating-point :(

	cout << "\n\tresult : " << d << endl;
}

void defineExample5() {

	cout << "\n Example 5 ------------------------------------\n";

#define VARIABLE(x) #x

	int i = 100;

	cout << "\n\ttoken is :\t" << VARIABLE(i) << endl;
	cout << "\n\ttoken is :\t" << VARIABLE(var) << endl;
}

void defineExample6() {

	cout << "\n Example 6 ------------------------------------\n";

#define _VAR(x) cout<<"\n\t"<<typeid(x).name()<<" "<< #x <<" = "<<(x)<<endl;

	class D {
	public:
		int v = 808;
		string s = "wait what?";
	};

	D d;

	_VAR(d.v);
	_VAR(d.s);
}

void defineExample7() {

	cout << "\n Example 7 ------------------------------------\n";

#define JOIN(a, b) a##b

	int foobar = 303;

	cout << "\n\t 303 is " << JOIN(foo, bar) << endl;
}

void defineExample8() {

	cout << "\n Example 8 ------------------------------------\n";

	/*
	lets' have a bunch of variables of one kind

		int monday, tuesday, wednesday, thursday, friday, saturday, sunday;

	and some neutral value

		monday = tuesday = wednesday = thursday = friday = saturday = sunday = 0;

	let's have an enum referable to them; e_ prefix ain't relevant here - it's just to avoid compilers confusion
	
		enum DAY {e_monday, e_tuesday, e_wednesday, e_thursday, e_friday, e_saturday, e_sunday,};

	the idea is to make the preprocessor writing the variable names for us everytime they need to be mentioned in the code,
	so we won't have to, and won't risk any mistype
	*/

	//X is a name for another macro, the one that changes the names listed here; the 'X' name is a convention
#define DAYS_OF_WEEK \
	X(monday) \
	X(tuesday) \
	X(wednesday) \
	X(thursday) \
	X(friday) \
	X(saturday) \
	X(sunday)

	/* having the list it's time to define the X macro
	*/

#define X(dayOfWeek) int dayOfWeek = counter++;
	int counter = 0;
	DAYS_OF_WEEK
#undef X

		/* whether X is undefined, it might be redifined as if never happened in the first place
		*/

#define X(dayOfWeek) cout << "\n\t" << dayOfWeek;
		DAYS_OF_WEEK
#undef X
		cout << endl;

#define X(dayOfWeek) e_##dayOfWeek,
	enum DAYS_ENUM {
		DAYS_OF_WEEK
	};
#undef X

#define X(dayOfWeek) cout << "\n\t" << e_##dayOfWeek;
	DAYS_OF_WEEK
#undef X
		cout << endl;
}

// Excercises ----------------------------------

void defineExcercise1() {

	cout << "\n Excercise 1 ----------------------------------\n";

#define PI (103993.0/33102.0)

	cout << "\n\tresult:\t" << 2.0 * 5.4 * PI << endl;
}

void defineExcercise2() {

	cout << "\n Excercise 2 ----------------------------------\n";

	/*suggested by Creel to not only bracket around the replacing expression
	but also around its inner variables - to be explained later

	these directives don't care about the context, the go through the entire file, like nobody's business
	*/
#define SQUARE(x) ((x)*(x)) 

	cout << "\n\tresult:\t" << SQUARE(PI) << endl;
}

void defineExcercise3() {

	cout << "\n Excercise 3 ----------------------------------\n";

#define SMALLER(x, y) ((x)<(y))

	cout << "\n\tresult:\t" << SMALLER(2, 3) << endl;
}

void defineExcercise4() {

	cout << "\n Excercise 4 ----------------------------------\n";

#define VARNAME(x) #x

	int i = 303;

	cout << "\n\t" << VARNAME(i) << endl;
}

void defineExcercise5() {

	cout << "\n Excercise 5 ----------------------------------\n";

#define VARTYPE(x) (typeid(x).name())

	int i = 101;

	cout << "\n\ti is : " << VARTYPE(i) << endl;
}

void defineExcercise6() {

	cout << "\n Excercise 6 ----------------------------------\n";

#define SAMETYPE(x,y) ((typeid(x).name() == typeid(y).name()) /*? "yay" : "nay"*/)

	int i, j;
	double k, l;

	cout << "\n\ti==j : " << SAMETYPE(i, j)
		<< "\n\tj==k : " << SAMETYPE(j, k)
		<< "\n\tk==l : " << SAMETYPE(k, l) << endl;
}

#define PICK (N, IDX) (N##IDX)

void defineExcercise7() {

	//cout << "\n Excercise 7 ----------------------------------\n";

	int A0, A1, A2, A3, A4;

	//PICK(A, 3) = 25;

	/*this one spits
	C2065 : (...) undeclared identifier
	on N, IDX, NIDX, A
	*/

}


void define() {

	//preprocessorDirectivesExample1();

	defineExample2();

	defineExample3();

	defineExample4();

	defineExample5();

	defineExample6();

	defineExample7();

	defineExample8();



	defineExcercise1();

	defineExcercise2();

	defineExcercise3();

	defineExcercise4();

	defineExcercise5();

	defineExcercise6();

}