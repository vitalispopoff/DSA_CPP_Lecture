#include <iostream>

using namespace std;

// 4. calculator exec.

int 
	a,
	b;
bool
	repeat = true;
char
	operation;

double calculate() {

	if (operation == '+') return (double)a + (double)b;
	else if (operation == '=') return (double)a - (double)b;
	else if (operation == '*') return (double)a * (double)b;
	else if (operation == '/' && b != 0.) return (double)a / (double)b;
	else cout << "Nah nah nah." << endl;

	return 0;
}

double calculate1() {

	switch (operation) {

	case '+': return (double)a + (double)b;
	
	case '-': return (double)a - (double)b;

	case '*': return (double)a * (double)b;
			
	case '/': {

		if (b != 0) return (double)a / (double)b;
		else cout << "Nah nah nah..." << endl;

	}
	default: return 0;
	}
}

void setInput() {

	cout << "\n\tSet the first operand, and hit Enter.\n\tThe operand may be either an integer, or a floating point.\n";

	cin >> a;


	cout << "\n\n\tSet the operation, and hit Enter.\n\tChoose between:\n";
	cout << "\t(+) addition,\n\t(-)subtraction,\n\t(*)multiplication,\n\t(/) division.\n\n";

	cin >> operation;

	cout << "\n\n\tSet the other operant, and hit Enter.\n\tThe operand may be either and integer, or a floating point.\n";

	cin >> b;
}

void temporal(){

	do {

		setInput();

		double
			resultDouble = calculate();

		bool
			flag = resultDouble - (double)((int)resultDouble) == 0.;

		cout << "\n\n\t" << a << " " << operation << " " << b << " = " << (flag ? (int)resultDouble : resultDouble) << endl;

		cout << "\n\n\t Would You mind another calculation?\n\tWrite Y or y whether You do, or actually anything else otherwise, and hit Enter.\n";

		char
			answer;

		cin >> answer;

		repeat = (answer == 'N') || (answer == 'n');


		//if (answer == 27)break;

		cout << "\n\n\t...as You wish...\n\n";

	} while (repeat);

	cout << "\n\n\tC'ya.\n\n";
}
