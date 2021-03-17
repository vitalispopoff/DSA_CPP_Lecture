#include "_externalLibs.h"
#include "newsAndDeletees.h"


void newsAndDeletees() {

	cout << "\n\tinitialised by function\n\t\t" << *i << endl;

*i = 191;

cout << "\n\treinitialised by global statement\n\t\t" << *i << endl;

newsAndDeletees1();

cout << "\n\treinitialised by function again\n\n\t" << *i << endl;

newsAndDeletees2();

cout << "\n\tafter del local attempt\n\n\t" << *i << endl;
}

void newsAndDeletees1() {*i = 190;}
void newsAndDeletees2() {delete i;}
