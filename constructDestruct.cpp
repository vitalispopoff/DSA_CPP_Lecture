
#include "_externalLibs.h"
#include "constructDestruct.h"

//void constructDestruct() {
//
//	constructDestructExcercise1();
//}

class Bird {

public:
	Bird();
	Bird(int);
	Bird(float);

	~Bird();
};

Bird::Bird() {}

Bird::Bird(int i) {

}

Bird::Bird(float f) {

}

Bird::~Bird() {

	// wha'evah
}