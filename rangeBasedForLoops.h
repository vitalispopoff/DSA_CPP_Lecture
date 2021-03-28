
/*safer alternative for a for-loop syntax,
can't go beyond iterated structure area*/
void rangeBasedForLoops();

/*basic syntax*/
void rangeBasedForLoopsExample01();

/*identification of the declared iterated type can be
may be left to the compiler by using 'auto' instead
of an actual typename
*/
void rangeBasedForLoopsExample02();

/* both ranged-for-loops and 'auto'
* work with vectors too.
*/
void rangeBasedForLoopsExample03();

/* the 'i' variable is a copy
of an actually called data structure element,
no action performed on 'i' should alter the original
*/
void rangeBasedForLoopsExample04();

/* to mess around with the originals
gotta call'em by refrence ('&')
*/
void rangeBasedForLoopsExample05();

/*the loop won't work with data structures alocated in heap
(i.e. initialized with 'new' expression)
that's because these aren't returned with specifically declared
ending or length (returned usually as a pointer, right?)

E2291 : this range-based 'for' statement requires a suitable "begin" function and none were found
C2672, C2893, C2784, C3536, C2100.
*/
void rangeBasedForLoopsExample06();

/*mimicking Python implementation
 of the ranged for loop

 https://youtu.be/A9ouSdcpmX4?list=PL0C5825724605DB2A&t=556
*/
//void rangeBasedForLoopsExample07();