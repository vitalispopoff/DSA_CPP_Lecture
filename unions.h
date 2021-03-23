
/*
 data structure type that holds only one non-static member.
the memory allocated for the union is equal 
to the size of its biggest member.

union doesn't support reference type non-static members
(like those safer pointer-likes, right?)
*/
void unions();

/*declaration of union, 
union - structure size difference compare
*/
void unionsExample1();

/*

*/
void unionsExample2();

/*
union members are public by default, 
apparently they may be declared private,
but can't be declared protected, 
as union is said to not be inherited
*/
void unionsExample3();

/*getter/setter functions
seem to be not working in unions
*/
void unionsExample4();


void unionsExample5();
