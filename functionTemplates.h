
/* syntax convenience to automate boilerplate generating:
the compiled code will either way have the overloaded 
functions.
Compiler will generate all needed overloads 
of the templated function
*/
void functionTemplates();

/*(the problem) overloading the functions
*/
void functionTemplatesExample1();

/*calling templated function 
w/ single typename for input
*/
void functionTemplatesExample2();

/*calling templated function w/ forced casting to a single typename
the casting forces input and ouptut to be of a certain type
the forced type may differ from original input types
*/
void functionTemplatesExample3();

/* calling templated function
* w/ typename in the body
*/
void functionTemplatesExample4();

/*function templates with classes
it is mentioned that there's no serious difference
between typename and class - this to be inspected*/
void functionTemplatesExample5();

/*multiple typenames
this should work as long as provided types support
operators/functions etc used in the implementation.
(Cpt. Obvious)
*/
void functionTemplatesExample6();

/*the multiple typename template
can be casted on call too.
*/
void functionTemplatesExample7();

/* prototypes (declarations that is) of templates
have to be in the same file as their implementations

it looks like the easiest workaround for this situation
is to include the template in an exclusive header
(w/ #pragma once ?)

[not even trying to write a proper example here...]
*/


/* restricting types of input
looks like it's a developed technique rather
than a integral element of template syntax, right?
*/
void functionTemplatesExample8();

/*templating special cases 
which is probably kinda overloading 
the function template 
*/
void functionTemplatesExample9();

/*multitype template special cases 
the template may bey overloaded also 
when having more typenamed inputs, 
and only some of'em being defined
for a special case
*/
void functionTemplatesExample10();

/*overloaded template
check if input parameters are of the same type

provided by Creel
*/
void functionTemplatesExample11();

/*
template implementation calls an external function
of which it actually doesn't know a thing

when the template can't refer to the called function:
C2228 : left of '.getMagnitude' must have class/struct/union
*/
void functionTemplatesExample12();