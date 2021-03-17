
/* 'new' operator needs an assigned pointer, as it is
* held on the heap, and managed manually.
* hence the '*'
*/
int* i = new int;

/* the same way you may call an array, tho remember to del it with
'delete[] f;' as a simple 'delete f;' is said to be a fair fail;
*/
float* f = new float[2];

//a locally scoped function
void newsAndDeletees1();

// another locally scoped function
void newsAndDeletees2();


void newsAndDeletees();