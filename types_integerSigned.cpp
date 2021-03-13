#include "_externalLibs.h"
#include "types_integerSigned.h"

void signedChars() {

	signed char c;

	cout << "\n\n\t" << "signed char " << endl;
	cout << "\t0x80 = " << (c = 0x80) << endl;
	cout << "\t0xFE = " << (c = 0xFE) << endl;
	cout << "\t0x00 = " << (c = 0x00) << endl;
	cout << "\t0x01 = " << (c = 0x01) << endl;
	cout << "\t0x7F = " << (c = 0x7F) << endl;
}

void signedShortInts() {

	signed short int s = 0xFF;

	cout << "\n\n\t" << "signed short int " << endl;
	cout << "\t0x80 = " << (s = 0x8000) << endl;
	cout << "\t0xFE = " << (s = 0xFFFE) << endl;
	cout << "\t0x00 = " << (s = 0x0000) << endl;
	cout << "\t0x01 = " << (s = 0x0001) << endl;
	cout << "\t0x7F = " << (s = 0x7FFF) << endl;
}

void signedInts() {

	signed int i;

	cout << "\n\n\t" << "signed int " << endl;
	cout << "\t0x80 = " << (i = 0x80000000) << endl;
	cout << "\t0xFE = " << (i = 0xFFFFFFFE) << endl;
	cout << "\t0x00 = " << (i = 0x00000000) << endl;
	cout << "\t0x01 = " << (i = 0x00000001) << endl;
	cout << "\t0x7F = " << (i = 0x7FFFFFFF) << endl;
}

void signedLongInts() {

	long l;

	long arr[] = { 
		0x80000000, 
		0xFFFFFFFE, 
		0x00000000, 
		0x00000001, 
		0x7FFFFFFF };

	cout << "\n\n\t" << "signed long int " << endl;

	

	for (long l : arr) cout << "\t" << -1 * l << endl;
	//cout << "\t0x8000 = " << (signed long int)(l = 0x8000) << endl;
	//cout << "\t0xFFFE = " << (signed long int)(l = 0xFFFE) << endl;
	//cout << "\t0x0000 = " << (signed long int)(l = 0x0000) << endl;
	//cout << "\t0x0001 = " << (signed long int)(l = 0x0001) << endl;
	//cout << "\t0x7FFF = " << (signed long int)(l = 0x7FFF) << endl;
}

void signedLongLongInts() {


}


void types_signedIntegrals() {

	//signedChars();
	signedInts();
	signedLongInts();
}