char dupa[] = "dupa";

void whileLoops();

//	Examples	--------------------------------

/*while loop consists of two parts:
* sustain condition
* code block which is repeatedly executed as long as the condion is true
*/
void whileLoopsExample1();

/*if it wasn't for the break the loop would go forever.
also - as in other single statement cases curly braces are voluntary.
*/
void whileLoopsExample2();

/*while loope may be with a 'return' statement too,
also it accepts the 'continue' statment as well;
*/
void whileLoopsExample3();

// Errors, Exceptions, and fails	------------

/*obviously the sustain condition must be declared...
E0029 : expected an expression
C2059 : syntax error
*/
void whileLoopsError1();

/*... and initialized*/
void whileLoopsError2();

/*yet the type of the sustain expression...*/
void whileLoopsError3();

//	Excercises	--------------------------------

/*Excercise 1:
* count to 100 with while loop
*/
void whileLoopsExc1();

/*Excercise 2:
* count 45 to 0 in 5's with a do-while loop
*/
void whileLoopsExc2();

/*Excercise 3:
* count first 6 powers of 7
*/
void whileLoopsExc3();