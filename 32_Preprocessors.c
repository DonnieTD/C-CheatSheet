/*
The C Preprocessor is not a part of the compiler, but is a 
separate step in the compilation process. In simple terms, a 
C Preprocessor is just a text substitution tool and it instructs 
the compiler to do required pre-processing before the actual compilation. 
*/

/*  Predefined Macros
1	
__DATE__

The current date as a character literal in "MMM DD YYYY" format.

2	
__TIME__

The current time as a character literal in "HH:MM:SS" format.

__FILE__

This contains the current filename as a string literal.

__LINE__

This contains the current line number as a decimal constant.

__STDC__

Defined as 1 when the compiler complies with the ANSI standard.

*/
#include <stdio.h>

int main()
{

    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);
}

/* 

Sr.No.	Directive & Description
1 #define

Substitutes a preprocessor macro.

2 #include

Inserts a particular header from another file.

3 #undef

Undefines a preprocessor macro.

4 #ifdef

Returns true if this macro is defined.

5 #ifndef

Returns true if this macro is not defined.

6 #if

Tests if a compile time condition is true.

7 #else

The alternative for #if.

8 #elif

#else and #if in one statement.

9 #endif

Ends preprocessor conditional.

10 #error

Prints error message on stderr.

11 #pragma

Issues special commands to the compiler, using a standardized method.

*/