#include "_externalLibs.h"
#include "types_integerSigned.h"

//signed chars.
/*void signedChars() {

	char arr[] = {
		0x80'00,
		0xFF'FE,
		0x00'00,
		0x00'01,
		0x7F'FF };

	cout << "\n\t" << "signed char" << endl;
	for (char c : arr) cout << "\t" << c << endl;
}*/

void signedShortInts() {

	short arr[] = {
		0x80'00,
		0xFF'FE,
		0x00'00,
		0x00'01,
		0x7F'FF };

	cout << "\n\t" << "signed short" << endl;
	for (short s : arr) cout << "\t" << s << endl;
}

void signedInts() {

	int arr[] = {
		0x8000'0000,
		0xFFFF'FFFE,
		0x0000'0000,
		0x0000'0001,
		0x7FFF'FFFF };

	cout << "\n\t" << "signed int" << endl;
	for (int i : arr) cout << "\t" << i << endl;
}

void signedLongInts() {

	long arr[] = {
		0x8000'0000,
		0xFFFF'FFFE,
		0x0000'0000,
		0x0000'0001,
		0x7FFF'FFFF };

	cout << "\n\t" << "signed long " << endl;
	for (long l : arr) cout << "\t" << l << endl;
}

void signedLongLongInts() {

	long long arr[] = {
		0x8000'0000'0000'0000,
		0xFFFF'FFFF'FFFF'FFFE,
		0x0000'0000'0000'0000,
		0x0000'0000'0000'0001,
		0x7FFF'FFFF'FFFF'FFFF };

	cout << "\n\t" << "signed long " << endl;
	for (long long l : arr) cout << "\t" << l << endl;

}

void types_signedIntegrals() {

	/*signedChars();*/
	signedShortInts();
	signedInts();
	signedLongInts();
	signedLongLongInts();
}