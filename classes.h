
void classes();

/*declared and initialized in stack;
proves that even after the scope conclusion the actual values
of a local variables are not ereased, and may be obtained.
Whether the memory slot occupied by the variable is to be 
reassigned to a new one, the old value would be return 
until the new variable proper initialization
*/
void classesExample1();

/*class function may have separated declarations and implementations
in that case the implementations would be outside the class code block
*/
void classesExample2();

/* declaring, implementing, and calling
overloaded constructors

class fuctions may be implemented
both inside or outside class declaration blocks

btw. no overloading destructors available,
also - necessity of a destructor implementations 
ain't that obvious as well
*/
void classesExample3();


/* Excercise 1:
Write a Person class w/ defined fields:
+ age (int),
+ height (float),
+ weight (float).
set their values in the constructor
*/
void classesExcercise1();

/* Excercise 2:
Write a House class containig 
a random number of people in it
*/
void classesExcercise2();

/* Excercise 3:
Write a Town class containing
1000 houses; use previously written classes
*/
void classesExcercise3();