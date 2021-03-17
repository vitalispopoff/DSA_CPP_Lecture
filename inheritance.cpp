#include "_externalLibs.h"
#include "inheritance.h"

// Example 1 -----------------------------------

class LivingThing {

public:
	int age;

	void breathe() {
		cout << "\n\tLivingThing : Breathe!" << endl;
	}
};

/* colon sign introduces the parent class
access modifier after the colon defines the accessibility to the inherited elements.
(this calls for a further explanation)
*/
class Animal : public LivingThing {

public:
	void move() {
		cout << "\n\tAnimal : Move!" << endl;
	}
};

class Insect : public Animal {

public:
	int legs, eyes;

	void buzz() {
		cout << "\n\tInsect : Buzz!" << endl;
	}
};

class Bee : public Insect {

public:
	int wings;

	Bee() {
		legs = eyes = 6;
		wings = 2;
	}
	void makeHoney() {
		cout << "\n\tBee : Honey!" << endl;
	}
};

void inheritanceExample1() {

	cout << "\n-------\tInheritance Example 1 ------------------------------\n";

	cout << "\n\tLivingThing -------\n";

	LivingThing t;

	t.breathe();

	cout << "\n\tInsect ------------\n";

	Insect insect;
	insect.legs = 6;

	cout << "\n\tinsect legs: " << insect.legs << endl;
	insect.buzz();
	insect.move();
	insect.breathe();

	cout << "\n\tBee ---------------\n";
	Bee b = Bee();

	cout << "\n\tb's i's : " << b.eyes
		<< "\n\tb's lex : " << b.legs
		<< endl;

	b.makeHoney();
	b.buzz();
	b.breathe();
}

// Example 2 -----------------------------------

class Encryption {

private:
	string privateKey;
public:
	string publicKey;
};

class Key : public Encryption {

public:
	Key() {
		publicKey = "dziêki elektrycznoœci W³adek odrobi³ zadanie domowe z matematyki";
	}

	void publishKey() {

		//cout << "\n\tprivate Key: " << privateKey<<endl;	// disabled due to the error.
		cout << "\n\tpublic Key : " << publicKey << endl;
	}
};

void inheritanceExample2() {

	cout << "\n-------\tInheritance Example 2 ------------------------------\n";

	Key k;

	k.publishKey();
}






void inheritance() {

	inheritanceExample1();

	inheritanceExample2();

}