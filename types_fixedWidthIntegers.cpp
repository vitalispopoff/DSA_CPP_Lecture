#include "_externalLibs.h"
#include "types_fixedWidthIntegers.h"
#include <cstdint>

void fixedInt() {

	cout << endl;

	int menu = 3;

	switch (menu) {
		// fixedInt_ :
		case 1: {
			fixedInt_08();
			cout << endl;
			fixedInt_16();
			cout << endl;
			fixedInt_32();
			cout << endl;
			fixedInt_64();
			cout << endl;
			break;
		}

		case 2: {
			fixedFast_08();
			cout << endl;
			fixedFast_16();
			cout << endl;
			fixedFast_32();
			cout << endl;
			fixedFast_64();
			cout << endl;
		}

		case 3: {
			fixedLeast_08();
			cout << endl;
			fixedLeast_16();
			cout << endl;
			fixedLeast_32();
			cout << endl;
			fixedLeast_64();
			cout << endl;
		}
	}
	// cls .
	/*{

		char i;
		cin >> i;
		printf("\033c");
	}*/

}

void fixedInt_08() {

	int8_t arr[] = {
		0x80,
		0xFE,
		0x00,
		0x01,
		0x7F };

	for (int8_t i : arr) cout << "\n\t" << (int)i << "\t" << i; // gotta cast as it's read as char
}

void fixedInt_16() {

	int16_t arr[] = {
		0x80'00,
		0xFF'FE,
		0x00'00,
		0x00'01,
		0x7F'FF };

	for (int16_t i : arr) cout << "\n\t" << i;
}

void fixedInt_32() {

	int32_t arr[] = {
		0x80'00'00'00,
		0xFF'FF'FF'FE,
		0x00'00'00'00,
		0x00'00'00'01,
		0x7F'FF'FF'FF };

	for (int32_t i : arr) cout << "\n\t" << i;
}

void fixedInt_64() {

	int64_t arr[] = {
		0x8000'0000'0000'0000,
		0xFFFF'FFFF'FFFF'FFFE,
		0x0000'0000'0000'0000,
		0x0000'0000'0000'0001,
		0x7FFF'FFFF'FFFF'FFFF };

	for (int64_t i : arr) cout << "\n\t" << i;
}


void fixedFast_08() {

	int_fast8_t arr[] = {
		0x80,
		0xFF,
		0x00,
		0x01,
		0x7F };

	for (int_fast8_t i : arr) cout << "\n\t" << (int)i << "\t" << i;
}

void fixedFast_16() {

	int_fast16_t arr[] = {
		0x80'00,
		0xFF'FF,
		0xFF'FF'FF'FF,
		0x00'00,
		0x00'01,
		0x7F'FF };

	for (int_fast16_t i : arr) cout << "\n\t" << i;

	uint_fast16_t t = 0xFFFF;
	cout << endl << t << endl;
}

void fixedFast_32() {

	int_fast32_t arr[] = {
		0x8000'0000,
		0xFFFF'FFFF,
		0x0000'0000,
		0x0000'0001,
		0x7FFF'FFFF };

	for (int_fast32_t i : arr) cout << "\n\t" << i;
}

void fixedFast_64() {

	int_fast64_t arr[] = {
		0x8000'0000'0000'0000,
		0xFFFF'FFFF'FFFF'FFFF,
		0x0000'0000'0000'0000,
		0x0000'0000'0000'0001,
		0x7FFF'FFFF'FFFF'FFFF };

	for (int_fast64_t i : arr) cout << "\n\t" << i;
}


void fixedLeast_08() {

	int_least8_t arr[] = {
		0x80,
		0xFF,
		0x00,
		0x01,
		0x7F };

	for (int_least8_t i : arr) cout << "\n\t" << (int)i << "\t" << i;
}

void fixedLeast_16() {

	int_least16_t arr[] = {
		0x80'00,
		0xFF'FF,
		0x00'00,
		0x00'01,
		0x7F'FF };

	for (int_least16_t i : arr) cout << "\n\t" << i;
}

void fixedLeast_32() {

	int_least32_t arr[] = {
		0x8000'0000,
		0xFFFF'FFFF,
		0x0000'0000,
		0x0000'0001,
		0x7FFF'FFFF };

	for (int_least32_t i : arr) cout << "\n\t" << i;
}

void fixedLeast_64() {

	int_least64_t arr[] = {
		0x8000'0000'0000'0000,
		0xFFFF'FFFF'FFFF'FFFF,
		0x0000'0000'0000'0000,
		0x0000'0000'0000'0001,
		0x7FFF'FFFF'FFFF'FFFF };

	for (int_least64_t i : arr) cout << "\n\t" << i;
}
