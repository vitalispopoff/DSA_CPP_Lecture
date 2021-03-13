
void arrays();

//	Examples	--------------------------------

/*basic concepts:
* declaration
* 'manual' filling the indices
*/
void arraysExample1();

/*arrays may be declared all at once:
* by listing all the entries,
*/
void arraysExample2();

/*or one...
*/
void arraysExample3();

/*or none
*/
void arraysExample4();

/* they're iterable as well (as seen in previous functions):
* by for loop
* by for-each loop*/
void arraysExample5();

//	Errors, Exceptions, and fails --------------

/* fails in declaration and initialization:
* E0070 : incomplete type is not allowed
* c2133 'arr' : unknown size
*/
void arraysErrors1();

/* fails in declaration and initialization:
* E1345 : an empty initializer is invalid for an array with unspecified bound
* C4266 : cannot allocate an array of constant size 0
*/
void arraysErrors2();

/* whether being a function output, 
arrays are said to be returned as pointers only.
The problem is: how to deal with an array as a pointer?
*/
void arraysErors3();

//	Excercises	--------------------------------

