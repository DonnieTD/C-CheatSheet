/*

    There are 4 storage classes;
    |  auto 
        ( The auto storage class is the default storage class for all local variables.) 
    |  register
       The register storage class is used to define local variables that should be stored in a register instead of RAM
      
       NB:
       The register should only be used for variables that require quick access such as counters. 
       It should also be noted that defining 'register' does not mean that the variable will be stored in a register. 
       It means that it MIGHT be stored in a register depending on hardware and implementation restriction 
    |  static

       The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program 
       instead of creating and destroying it each time it comes into and goes out of scope.
       In C programming, when static is used on a global variable, it causes only one copy of that member to be shared by all the objects of its class.
    
    |  extern

       The extern storage class is used to give a reference of a global variable that is visible to ALL the program files. 
       When you use 'extern', the variable cannot be initialized however, it points the variable name at a storage location 
       that has been previously defined.

       When you have multiple files and you define a global variable or function, which will also be used in other files, 
       then extern will be used in another file to provide the reference of defined variable or function. 
       
       Just for understanding, extern is used to declare a global variable or function in another file.

*/

#include <stdio.h>

/* function declaration */
void func(void);

static int count = 5; /* global variable */

main()
{

    while (count--)
    {
        func();
    }

    return 0;
}

/* function definition */
void func(void)
{

    static int i = 5; /* local static variable */
    i++;

    printf("i is %d and count is %d\n", i, count);
}