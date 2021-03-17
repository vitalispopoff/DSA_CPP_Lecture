#include "_externalLibs.h"
#include "indirection.h"

void indirectionExample1() {

	cout << "\n -----\tExample 1 --------------------------------\n";


	unsigned i = 256;	// a regular variable

	cout << "\n\ttvalue of i\t" << i	// calling the variable by its value
		<< "\n\taddress of i\t" << &i	// calling it by the address
		<< endl;

	unsigned* p;	// declaration of a pointer typed accordinlgy to the i type

	/* for initialization separated from declaration the pointer is to be called w/o asterisk,
	the appointed value is with ampersand (it's the address after all
	*/
	p = &i;

	cout << "\n\t pointed val\t" << *p		//appointed variable value
		<< "\n\t pointer val \n\t" << p		//appointed variable addres
		<< endl;

	/* reading/overwriting appointed variable value 
	is processed by calling the pointer with asterisk
	*/
	*p -=127;

	cout << "\n\t added 101";
	cout << "\n\t pointed val\t" << *p		//appointed variable value
		<< "\n\t pointer val \n\t" << p		//appointed variable addres
		<< endl;

	p++;
	

	cout << "\n\t" << (*p >> 8) << endl;
}







void indirection() {

	indirectionExample1();
}