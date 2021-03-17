#include "_externalLibs.h"
#include "classes.h"

// Examples ------------------------------------

class ExampleClass1 {

public:

	char c = 165;

	ExampleClass1();
	~ExampleClass1();
};

ExampleClass1::ExampleClass1() {

	cout << "\n\t"<<"ExampleClass1 constructor successfully called."<< endl;
}

ExampleClass1::~ExampleClass1() {

	c = 2;
}

void classesExample1() {

	char* ref1;

	{
		ExampleClass1 e1 = ExampleClass1();

		cout << "\n\te.c :\t" << e1.c << endl;

		ref1 = &e1.c;

	cout << "\n\te1.c adr :\t" << (uintptr_t) ref1 << endl;
	cout << "\n\tref :\t" << *ref1 << endl;

	// disposable here - with scope conclussion the destructor will be called by default
	//e.~ExampleClass1();	
	}

	cout << "\n\t----------scope closed----------" << endl;
	//cout << "\n\te1.c :\t" << e1.c << endl;	// disabled due to an error
	cout << "\n\tref :\t" << *ref1 << endl;
}


// Excercise 1 ---------------------------------

class Person {

public:
	int age;
	float height, weight;

	Person();
	void toString();
};

Person::Person() {



	age = (rand() % 75) + 25;
	height = ((rand() % 100) + 120) / 100.;	
	weight = ((rand() % 750) + 500) / 10.;
}

void Person::toString() {

	cout << "\n\tage\t" << age <<"\tyears old,"
		<< "\n\theight\t" << height << "\tcm tall,"
		<< "\n\tweight\t" << weight <<"\tkg of weight"
		<< endl;
}

void classesExcercise1() {

	Person p = Person();

	p.toString();

}

// Excercise 2 ---------------------------------

class House {

public:
	int population;
	Person* inhabitants;

	House();
	~House();
};

House::House() {
	population = (rand() % 5) + 1;
	inhabitants = new Person[population];

	cout << "\n\tpopulation : " << population << endl;

	for (int i = 0 ; i < population; ++i)
	{
		inhabitants[i] = Person();
		//cout << "\n\t generated for " << i << endl;
		//inhabitants[i].toString();
	}
}

House::~House() {

	delete[] inhabitants;
}

void classesExcercise2() {

	House h = House();

	cout << "\n---------------------------\n";

	for (int i = 0; i < h.population; ++i) h.inhabitants[i].toString();		

}

void classes() {

	//classesExample1();

	//classesExcercise1();

	classesExcercise2();
}