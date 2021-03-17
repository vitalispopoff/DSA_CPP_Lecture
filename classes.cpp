#include "_externalLibs.h"
#include "classes.h"

// Example 1 -----------------------------------

class ExampleClass1 {

public:
	char c;

	ExampleClass1() {

		c = (char) 165;

		cout << "\n\t" << "ExampleClass1 constructor successfully called." << endl;
	}

	~ExampleClass1() {

		c = 2;
	}
};

void classesExample1() {

	cout << "\n Example 1 ------------------------------------\n";

	char* ref1;

	{
		ExampleClass1 e1 = ExampleClass1();

		cout << "\n\te.c :\t" << e1.c << endl;

		ref1 = &e1.c;

		cout << "\n\te1.c adr :\t" << (uintptr_t)ref1 << endl;
		cout << "\n\tref :\t" << *ref1 << endl;

		// disposable here - with scope conclussion the destructor will be called by default
		//e.~ExampleClass1();	
	}

	cout << "\n\t----------scope closed----------" << endl;
	//cout << "\n\te1.c :\t" << e1.c << endl;	// disabled due to an error
	cout << "\n\tref :\t" << *ref1 << endl;
}

// Example 2 -----------------------------------

class ExampleClass2 {
public:
	int var = 0;
	ExampleClass2();
	~ExampleClass2();
};

ExampleClass2::ExampleClass2() {

	cout << "\n\tExampleClass2 constructor successfully called." << endl;
}
ExampleClass2::~ExampleClass2() {

	cout << "\n\tExampleClass2 destructor successfully called." << endl;
}

void classesExample2() {

	cout << "\n Example 2 ------------------------------------\n";

	ExampleClass2 object;
	cout << "\n\tobject variable = " << object.var << endl;
}

// Example 2 -----------------------------------

class ExampleClass3 {

public:
	int var = 0;

	ExampleClass3() {

		var = 0;

		cout << "\n\tdefault constructor called.\n";
	}
	ExampleClass3(int i) {
		
		var = i;
		cout << "\n\tconstructor overload called.\n";
	}
	
	//~ExampleClass3();	// this destructor cause a lots of problems.
};

void classesExample3() {

	cout << "\n Example 3 ------------------------------------\n";

	ExampleClass3 object1;

	cout << "\n\tobject1 var = " << object1.var << endl;

	ExampleClass3 object2 = ExampleClass3(1);

	cout << "\n\tobject2 var = " << object2.var << endl;
}

// Excercise 1 ---------------------------------

class Person {

public:
	int age;
	float height, weight;

	Person() {

		age = (rand() % 75) + 25;
		height = ((rand() % 100) + 120) / 100.;
		weight = ((rand() % 750) + 500) / 10.;
	}

	void toString() {

		cout << "\n\tage\t" << age << "\tyears old,"
			<< "\n\theight\t" << height << "\tcm tall,"
			<< "\n\tweight\t" << weight << "\tkg of weight"
			<< endl;
	}

};

void classesExcercise1() {
	cout << "\n Excercise 1 ----------------------------------\n";

	Person p = Person();

	p.toString();

}

// Excercise 2 ---------------------------------

class House {

public:
	int population;
	Person* inhabitants;


	House() {
		population = (rand() % 5) + 1;
		inhabitants = new Person[population];

		for (int i = 0; i < population; ++i)
			inhabitants[i] = Person();
	}

	~House() {

		delete[] inhabitants;
	}
};

void classesExcercise2() {

	cout << "\n Excercise 2 ----------------------------------\n";

	House h = House();

	for (int i = 0; i < h.population; ++i) h.inhabitants[i].toString();
}

// Excercise 3 ---------------------------------

class Town {

public:
	House* building;

	Town() {

		building = new House[1000];
	}

	~Town() {

		delete[] building;
	}
};

void classesExcercise3() {

	cout << "\n Excercise 3 ----------------------------------\n";

	/* in case of a default constructor,
	a constructor call apparently ain't a necessity
	*/
	Town t /*= Town()*/;
	int townPopulation = 0;

	for (int i = 0; i < 1000; ++i)
		townPopulation += t.building[i].population;

	cout << "\n\ttown population = " << townPopulation << endl;
}

// Main function -------------------------------

void classes() {

	classesExample1();

	//classesExample2();

	//classesExample3();


	classesExcercise1();

	classesExcercise2();

	classesExcercise3();

	cout << "\n ----------------------------------------------\n";
}