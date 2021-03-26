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

void unionsExample3() {

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

void unionsExample4() {

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

void unionsExample5() {

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

void unionsExample6() {

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

void unionsExample7() {

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






void unions() {

	unionsExample1();

	unionsExample2();

	unionsExample3();

	unionsExample4();

	unionsExample5();

	unionsExample6();

	unionsExample7();
}






