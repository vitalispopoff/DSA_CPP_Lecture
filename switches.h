
void switches();

//	Examples	--------------------------------

/*switch passes from one case to another 
until the "break" or "return" stops the procedure.
*/
double switchesExample0();

/*a neat example of a while/switch based menu by Creel
* https://youtu.be/pLIfWO_rbT8?list=PL0C5825724605DB2A&t=267
*/
void switchesExample1();

/*if not interrupted the switch fires up every single case
* one by one
*/
void switchesExample2();

/* some experimentation with breaking the spree with return
*/
void switchesExample3();

/*more than one case may lead to the same conclusion,
* in this case all of 'em end up at default;
*/
void switchesExample4();

//	Errors, Exceptions, and fails	------------

/*switch does not accept doubles in value:
* in the case both "true" and "1" mean the same.
* C2196 : case value '1' already used
*/
void switchesError1();

/*the switch may be detached from the declared switch statement type, or can it ?
warning. C4808 : case '97 is not a valid value for switch condition of type 'bool' (reported with switchesError4 only)

*/
void switchesError2();

/*empty switch body
* warning C4060 : switch statement contains no 'case' or 'default' labels (reported with switchesError4 only)
*/
void switchesError3();

/*the switch statement must be based on the integral type
(integer, char, bool, enum), so a string (char[]) can not be the switch input.
E0847 : expression must have integral or enum type
E2373 : this constant expression has type "const char *" instead of the required "char *" type
C2450 : a switch expression of type 'char [5]' is not valid
C2440 : 'type cast': cannot convert from 'const char [5]' to 'int'
C2046 : illegal case
C4060 : switch statement conatins no 'case' or 'default' labels
*/
void switchesError4();

/* switch expression has to be declared
E0029 : expected an expression
C2059 : syntax error
...
*/
void switchesError5();

/* empty body doesn't change it
E0029 : expeted an expression
C2059 : syntax error
*/
void switchesError6();

//	Excercises	--------------------------------
