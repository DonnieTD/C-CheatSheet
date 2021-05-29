#include <stdio.h>

/* 
    Global variables Declaration
*/
extern int a, b;
extern int c;
extern float f;

int main()
{

    /* 
        Local variables Declaration
    */
    int a, b;
    int c;
    float f;

    /* 
        Local variables Initialization
     */
    a = 10;
    b = 20;

    /* 
        Local variables Usage
     */
    c = a + b;
    printf("value of c : %d \n", c);

    f = 70.0 / 3.0;
    printf("value of f : %f \n", f);

    return 0;
}