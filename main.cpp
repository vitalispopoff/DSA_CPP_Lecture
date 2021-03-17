#include "main.h"
#include <ctime>


int menu = 0x40;

int main() {
	srand(time(NULL));

	mainMenu(menu);

	return 0;
}