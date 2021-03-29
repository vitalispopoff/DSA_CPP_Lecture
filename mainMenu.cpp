#include "main.h"
#include <vector>

void mainMenu() {

	typedef void (*fP)();

	vector<fP> menuVector = {
		[]() {mainMenu(); },
		[] {//indirection
#include "indirection.h"
			indirection(); },
		[] {//fixed width integrals
#include "types_fixedWidthIntegers.h"
			fixedInt(); },
		[] {//signed integrals
#include "types_integerSigned.h"
			types_signedIntegrals(); },
		[] {//structs
#include "structs.h"
			structs(); },
		[] {//unions
#include "unions.h"
			unions(); },
		[] {//function pointers
#include "functionPointers.h"
			functionPointers(); },
		[] {// function pointers 01
#include "functionPointers01.h"
			functionPointers01(); },
		[] {// strings
#include "strings.h"
			strings(); },
		[] {//arrays
#include "arrays.h"
			arrays(); },
		[] {//arrays2D
#include "arrays2D.h"
			arrays2D(); },
		[] {//while loops
#include "WhileLoops.h"
			whileLoops(); },
		[] {//for loops
#include "forLoops.h"
			forLoops(); },
		[] {//range based loops
#include "rangeBasedForLoops.h"
			rangeBasedForLoops(); },
		[] {//switches
#include "switches.h"
			switches(); },
		[] {//lambda functions
#include "lambdaFunctions.h"
			lambdaFunctions(); },
		[] {//function templates
#include "functionTemplates.h"
			functionTemplates(); },
		[] {// new and delete
#include "newsAndDeletees.h"
			newsAndDeletees(); },
		[] {// overloading
#include "overloading.h"
			overloading(); },
		[] {// classes
#include "classes.h"
			classes(); },
		[] {//inheritance
#include "inheritance.h"
			inheritance(); },
		[] {//define
#include "define.h"
			define(); },
		[] {//a lil game
#include "aLilGame.h"			
			aLilGame(); }
	};

	int menu = -1;

	if (menu < 0) {
		cout << "\n\t choose a number between 1 and " << menuVector.size() << " : ";
		cin >> menu;

		if (menu <= menuVector.size() && menu >= 0) menuVector[menu]();
	}
	cout << "\n\n\tthat would be all then.\n";
}






