#include "main.h"
#include <ctime>

int menu = 0x500;

int main() {
	srand(time(NULL));

	mainMenu(menu);

#include "functionPointers.h"
	functionPointers();

	return 0;
}