
/*single byte integer
* apparently by default understood by the compiler as a char
*/
void fixedInt_08();

void fixedInt_16();

void fixedInt_32();

void fixedInt_64();

/*length of the fast int types depends on the compilers view 
of what actual int length makes it the fastest to work with.
rite?
*/

void fixedFast_08();

void fixedFast_16();

void fixedFast_32();

void fixedFast_64();


void fixedLeast_08();

void fixedLeast_16();

void fixedLeast_32();

void fixedLeast_64();


/* Fixed width integer types
 avalailable since C++11
as a <cstdint> library
src: https://en.cppreference.com/w/cpp/types/integer
*/
void fixedInt();
