#include "_externalLibs.h"
#include "unions.h"

void unionsExample01() {

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

void unionsExample02() {

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

void unionsExample03() {

	cout << "\n\tExample 3 --------------------------------\n";

	union U {

	private:
		int x;
	public:
		float y;

		int getX() {
			return x;
		}
		int getX(int i) {
			x = i;
			return x;
		}
		void setX(int i) {
			x = i;
		}
	};

	U u;
	u.y = 100;

	cout << "\n\tu.y:\t" << u.y
		<< "\n\tu.getX():\t" << u.getX()
		/*<< endl*/;

	u.setX(100);

	//u.x = 101; // E0265 : member "U::x" (...) is inaccessible

	cout << "\n\t-- u.x set to 100 --"
		<< "\n\t(int) u.y:\t" << ((int)u.y)
		<< "\n\tu.getX():\t" << u.getX()
		<< "\n\tu.getX(303):\t" << u.getX(303)
		<< "\n\tu.getX():\t" << u.getX()
		<< endl;
}

void unionsExample04() {

	cout << "\n\tExample 4 --------------------------------\n";

	union U {
	private:
		int x;

	public:

		int getX() {
			return x;
		}
		int getX(int i) {
			x = i;
			return x;
		}
		void setX(int i) {
			x = i;
		}
	};

	U u;
	u.setX(100);

	cout << "\n\tgetX():\t" << u.getX();

	cout << "\n\tgetX(303):\t" << u.getX(303);

	cout << "\n\tgetX():\t" << u.getX();

	cout << endl;

}

void unionsExample05() {

	cout << "\n\tExample 5 --------------------------------\n";

	union U {
		int x;
		float y;

		int getX() {
			return x;
		}

		int getX(int i) {
			x = 0;
			return x;
		}

		void setX(int i) {
			x = i;
		}
	};

	U u;
	u.y = 100;

	cout << "\n\tu.y:\t" << u.y
		<< "\n\tu.getX():\t" << u.getX()
		/*<< endl*/;

	u.setX(100);

	cout << "\n\t-- u.x set to 100 --"
		<< "\n\t(int) u.y:\t" << ((int)u.y)
		<< "\n\tu.getX():\t" << u.getX()
		<< "\n\tu.getX(303):\t" << u.getX(303)
		<< "\n\tu.getX():\t" << u.getX()
		<< endl;

	u.x = 101;

	cout << "\n\t-- taken straight from the union"
		<< "\n\tu.x:\t" << u.x
		<< "\n\tu.x:\t" << u.x
		<< endl;
}

void unionsExample06() {

	cout << "\n\tExample 6 --------------------------------\n";

	union U {

		int x;
		float y;

		void setX(int i) {
			x = i;
		}

		int getX() {
			return x;
		}

		int getX(bool b) {

			return x;
		}

		int square() {
			return x * x;
		}
	};

	U u;
	u.x = 2;
	int i = u.square();

	u.setX(u.square());

	cout << "\n\tx:\t" << u.getX(1) << endl;

}

void unionsExample07() {

	cout << "\n\tExample 7 --------------------------------\n";

	enum DataType { INTEGER, FLOAT, DOUBLE };

	class TaggedUnion {
	private:
		DataType  unionType;
	public:

		union {
			int i;	float f; double d;// public by default, remember?			
		};

		void setValue(int input) {
			unionType = INTEGER;
			i = input;
		}
		void setValue(float input) {
			unionType = FLOAT;
			f = input;
		}
		void setValue(double input) {
			unionType = DOUBLE;
			d = input;
		}

		DataType getType() {
			return unionType;
		}
	};

	TaggedUnion m;
	//m.DATA_TYPE = TaggedUnion::INTEGER;
	//m.i = 190;

	m.setValue(190);
	cout << "\n\t" << m.getType() << "\t" << (m.getType() == INTEGER ? m.i : m.f) << endl;
	m.setValue(190.0f);
	cout << "\n\t" << m.getType() << "\t" << (m.getType() == INTEGER ? m.i : m.f) << endl;


}

void unionsExample08() {

	cout << "\n\tExample 8 --------------------------------\n";

	union {
		//private: double d; public: // disabled due to E0363
		int i;
		float f;
		//void toString() {} // disabled due to E0364
	};

	i = 1;
	f = i;

	cout << "\n\t" << i << endl;

	intptr_t
		addressI = (intptr_t)&i,
		addressF = (intptr_t)&f,
		addressDisplacement = addressI - addressF;

	cout << "\n\t" << addressDisplacement << endl;
}

void unionsExample09() {

	cout << "\n\tExample 9 --------------------------------\n";

	union Pixel {

		unsigned int color;
		struct { unsigned char r, g, b, a; };
	};

	Pixel p;

	p.color = 0x0066AAFF;

	cout << hex; // sets cout to hexadecimal

	cout << "\n\t" << (int)p.r << endl;

	cout << dec;	// sets cout to decimal
}

void checkEndianness() {

	cout << "\n\tcheck endianness\n";

	int i = 1;			// four bytes worth of binaries
	char* c = (char*)&i;	// a single byte

	cout << "\n\t"
		<< (int)*c		// calling the last byte of the i variable, and recasting to an int
		<< endl;
}

void unionsExample10() {

	cout << "\n\tExample 10 -------------------------------\n";

	/*order of member declarations results in the memory reservation order.
	*/


	/* preserving compatibility of the inner declarations order:
	if Struct1 b and Struct2 d are declared in the same order, everything's fine,
	when the order is not preserved error C4700 is called during the compilation.
	*/

	struct Struct1 {
		double b; // causes C4700 : unitialized local variable 'u' used - issued on the first u.s2.d cout call;
		short a;
		//double b;
	};

	struct Struct2 {
		double d;
		char c;
		//double d; // causes C4700 : unitialized local variable 'u' used - issued on the first u.s2.d cout call;
	};

	union U {

		Struct1 s1;
		Struct2 s2;
	};

	U u;
	u.s1.b = 99.9;


	cout << "\n\t" << u.s2.d << endl;


	intptr_t
		anchor1 = (intptr_t)&u.s1.a,
		anchor2 = (intptr_t)&u.s1.b,
		anchor3 = (intptr_t)&u.s2.c,
		anchor4 = (intptr_t)&u.s2.d,
		addressMisplacement = anchor1 - anchor3;

	cout << "\n\t1:\t" << anchor1
		<< "\n\t2:\t" << anchor2
		<< "\n\t3:\t" << anchor3
		<< "\n\t4:\t" << anchor4
		<< endl;

	cout
		<< "\n\t2 - 1:\t" << anchor2 - anchor1
		<< "\n\t4 - 3:\t" << anchor4 - anchor3
		<< endl;

	cout
		<< "\n\t1 size:\t" << sizeof(u.s1.a)
		<< "\n\t2 size:\t" << sizeof(u.s1.b)
		<< "\n\t3 size:\t" << sizeof(u.s2.c)
		<< "\n\t4 size:\t" << sizeof(u.s2.d)
		<< "\n\tu size:\t" << sizeof(u)
		<< endl;


}

void unionsExample11() {

	cout << "\n\tExample 11 -------------------------------\n";

	/* preserving compatibility of the inner declarations order:
	if Struct1 b and Struct2 d are declared in the same order, everything's fine,
	when the order is not preserved error C4700 is called during the compilation,
	but this is an issue for the d only.

	*/

	struct Struct1 {
		short a;
		double b;
	};

	struct Struct2 {
		double d;
		char c;
	};

	union U {

		Struct1 s1;
		Struct2 s2;
	};

	U u;

	int switcher = 5;

	switch (switcher) {

		/*works fine*/
	case 0: {
		u.s2.d = 1.0f;
		std::cout << "\n\td init/ a call\t" << u.s1.a << endl;
		break;
	};

		  //doesn't work: C4700 - uninitiatialized local variable 'u' used - issued on the cout u.s1.a
	case 1: {
		u.s2.c = 1;
		//std::cout << "\n\tc init/ a call" << u.s1.a << endl; disabled due to the error
		break;
	}

		  /*works fine*/
	case 2: {
		u.s1.a = 1.0f;
		std::cout << "\n\ta init/ d call" << u.s2.d << endl;
		break;
	}

		  //doesn't work: C4700 - uninitiatialized local variable 'u' used - issued on the cout u.s2.d
	case 3: {
		u.s1.b = 1;
		//std::cout << "\n\tb init/ d call" << u.s2.d << endl; // disabled due to the error
		break;
	}

	case 4: {
		u.s1.b = 1.0f;
		std::cout << "\n\tb init/ c call" << u.s2.c << endl;
		break;
	}
		  //doesn't work: C4700 - uninitiatialized local variable 'u' used - issued on the cout u.s2.d
	case 5: {
		u.s1.b = 1.0f;
		//std::cout << "\n\tb init/ d call" << u.s2.d << endl; //disabled due to the error
		break;
	}

		  //doesn't work: C4700 - uninitiatialized local variable 'u' used - issued on the cout u.s1.b
	case 6: {
		u.s1.a = 1;
		//std::cout << "\n\ta init/ b call" << u.s1.b << endl; // disabled due to the error
		break;
	}
	}

	int
		anchorU = (int)(unsigned char)&u,
		anchor1 = (int)(unsigned char)&u.s1,
		anchor2 = (int)(unsigned char)&u.s2,
		anchorA = (int)(unsigned char)&u.s1.a,
		anchorB = (int)(unsigned char)&u.s1.b,
		anchorC = (int)(unsigned char)&u.s2.c,
		anchorD = (int)(unsigned char)&u.s2.d;

	cout << "\n\ta:\t" << anchorA << "\tsize:\t" << sizeof(u.s1.a)
		<< "\n\tb:\t" << anchorB << "\tsize:\t" << sizeof(u.s1.b)
		<< "\n\tc:\t" << anchorC << "\tsize:\t" << sizeof(u.s2.c)
		<< "\n\td:\t" << anchorD << "\tsize:\t" << sizeof(u.s2.d)
		<< "\n\n\ts1:\t" << anchor1 << "\tsize:\t" << sizeof(u.s1)
		<< "\n\ts2:\t" << anchor2 << "\tsize:\t" << sizeof(u.s2)
		<< "\n\tu:\t" << anchorU << "\tsize:\t" << sizeof(u)
		<< endl;


	union V {
		Struct1 s1;
		char c;
	};
}

void unionsExample12() {

	//cout << "\n\tExample 12 -------------------------------\n";

	union V {
		int i;
		float f;
	};

	union W {
		char c;
		bool b;

	};

	union U {

		V v;
		W w;
	};




}

void unionsExample13() {

	cout << "\n\tExample 13 -------------------------------\n";

#pragma pack(push, 1)

	struct Struct1 {
		short a;
		double b;
	};

	struct Struct2 {
		char c;
		double d;
	};
#pragma pack(pop)

	union U {
		Struct1 s1;
		Struct2 s2;
	};

	U u;

	cout
		<< "\n\ta:\t" << (int)(unsigned char)&u.s1.a << "\tsize:\t" << sizeof(u.s1.a)
		<< "\n\tb:\t" << (int)(unsigned char)&u.s1.b << "\tsize:\t" << sizeof(u.s1.b)
		<< "\n\ts1:\t" << (int)(unsigned char)&u.s1 << "\tsize:\t" << sizeof(u.s1)
		<< "\n\tc:\t" << (int)(unsigned char)&u.s2.c << "\tsize:\t" << sizeof(u.s2.c)
		<< "\n\td:\t" << (int)(unsigned char)&u.s2.d << "\tsize:\t" << sizeof(u.s2.d)
		<< "\n\ts2:\t" << (int)(unsigned char)&u.s2 << "\tsize:\t" << sizeof(u.s2)
		<< "\n\tu:\t" << (int)(unsigned char)&u << "\tsize:\t" << sizeof(u)
		<< endl;
}

void unionsExample14() {

	cout << "\n\tExample 14 -------------------------------\n";

	struct Struct1 {
		short a;
		double b;
	};

	cout << "\n\tStruct1 size:\t" << sizeof(Struct1);

	struct Struct2 {

		char c;
		char padding;
		double d;
	};

	cout << "\n\tStruct2 size:\t" << sizeof(Struct2);

	union U {
		Struct1 s1;
		Struct2 s2;
	};

	U u;

	cout << "\n\ts1 size:\t" << sizeof(u.s1)
		<< "\n\ts2 size:\t" << sizeof(u.s2)
		<< endl;


}


void unions() {

	unionsExample01();

	unionsExample02();

	unionsExample03();

	unionsExample04();

	unionsExample05();

	unionsExample06();

	unionsExample07();

	unionsExample08();

	unionsExample09();

	//checkEndianness();

	unionsExample10();

	unionsExample11();

	unionsExample13();

	unionsExample14();
}
