#include "main.h"
#include <ctime>

int menu = 0x1F1;

int main() {
	srand(time(NULL));

	mainMenu(menu);

	return 0;
}