#include "main.h"
#include <ctime>


int menu = 0x41;

int main() {
	srand(time(NULL));

	mainMenu(menu);

	return 0;
}