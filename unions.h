
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
void unionsExample01();

/*

*/
void unionsExample02();

/*
union members are public by default, 
apparently they may be declared private,
but can't be declared protected, 
as union is said to not be inherited
*/
void unionsExample03();

/*getter/setter functions
seem to be not working in unions
*/
void unionsExample04();

/**/
void unionsExample05();

/**/
void unionsExample06();

/*discriminated unions
aka tagged unions
aka disjoint unions
aka variants
aka sum types
etc

essentialy it's a union wrapped in a class or enum 
which records the type with which 
the union was called last time

example provided by Creel
*/
void unionsExample07();

/*anonymous unions
declared within a certain scope without being named;
can't have private members, 
	E0363 : invalid anonymous union -- nonpublic member is not allowed
can't have member functions:
	E0364 : invalid anonymous union --member function is not allowed
*/
void unionsExample08();

/* Aliasing ?
Type Punning ?
nvm

using the same data as a whole (pixel)
or partially as a whole's single property (color)

problem though is with endianness
*/
void unionsExample09();

/* just btw a simple idea 
on checking the endianness
(again delivered by Creel)
*/
void checkEndianness();

/*Creel on padding 
( https://youtu.be/qht-dvDSYiA?list=PL0C5825724605DB2A&t=1655 )
doesn't seem like a case anymore, but there's more to it.
check the function inner comments.
*/
void unionsExample10();

/*union of strutcs - messing with the struct member orders*/
void unionsExample11();

/*union of unions*/
void unionsExample12();

/* #pragma pack
*/
void unionsExample13();

/*forcing proper padding - doesn't seem to be working
*/
void unionsExample14();