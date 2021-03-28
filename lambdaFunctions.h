
/**/
void lambdaFunctions();

/*the simplest lambda possible*/
void lambdaFunctionsExample01();

/*lambda w/ no input*/
void lambdaFunctionsExample02();

/*lambda with an input variables*/
void lambdaFunctionsExample03();

/*forcing output type
'-> nametype' before the implementation block*/
void lambdaFunctionsExample04();

/*capture list.
lambda can't intercept external variable on'er own
* E1735 : an enclosing-function local variable cannot be referenced in a lambda body unless it is in the capture list
*/
void lambdaFunctionsExample05();

/* capture list: pass by value vs by reference.
when the external variable is passed by value
attempted overwriting it will cause
E0137 : expression must be a modifiable lvalue

to switch from read-only the variable has to be passed by reference

*/
void lambdaFunctionsExample06();

/*capture list default passing
forces the compiler to look for the used variables 
on its own. 
depending on the operator foundings are passed 
by value [=],
by reference [&].

Doesn't look like [] were accepting passing by pointer
*/
void lambdaFunctionsExample07();

/* capture list with exclusive pass by reference
or by value (for that matter)
*/
void lambdaFunctionsExample08();

/*lambda in a for_each
*/
void lambdaFunctionsExample09();

/* lambda in a sorting algorithm.
bonus: a lambda in a lambda.
*/
void lambdaFunctionsExample10();

/*lambda in std::function

std::function uses function pointer, right?
*/
void lambdaFunctionsExample11();