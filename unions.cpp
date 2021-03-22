#include "_externalLibs.h"
#include "unions.h"

void unionsExample1() {

	cout << "\n\tExample 1 --------------------------------\n";

	union U {
		int x;
		float y;
	};

	struct S {

		int x;
		float y;
	};

	U u;
	S s;

	bool
		are_u_member_addresses_equal = ((intptr_t)&u.x) == ((intptr_t)&u.y),
		are_s_member_addresses_equal = ((intptr_t)&s.x) == ((intptr_t)&s.y);

	cout << "\n\tare u member addresses equal:\t" << (are_u_member_addresses_equal ? "yep" : "nah")
		<< "\n\tare s member addresses equal:\t" << (are_s_member_addresses_equal ? "yep" : "nah")
		<< endl;

	cout << "\n\tsize of u:\t" << sizeof(u)
		<< "\n\tsize of s:\t" << sizeof(s)
		<< endl;

	U* u1 = new U();
	S* s1 = new S();

	cout << "\n\tsize of u1:\t" << sizeof(*u1)
		<< "\n\tsize of s1:\t" << sizeof(*s1)
		<< endl;
}


void unionsExample2() {

	cout << "\n\tExample 2 --------------------------------\n";

	union U {
		int x;
		float y;
	};

	U u;

	u.x = 100;

	u.y = (u.x >> 1) - 0.01;

	cout << "\n\t" << u.y << endl;

}



void unions() {

	unionsExample1();

	unionsExample2();


}
