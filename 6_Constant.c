#include <stdio.h>

// DEFINE CUSTOM CONSTANTS
#define LENGTH 10
#define WIDTH 5

/*
        Character Constants
        \\	\ character     !Escape the escape char
        \'	' character     !Escape the '
        \"	" character     !Escape the ""
        \?	? character     !Escape the ?
        \a	Alert or bell   
        \b	Backspace                  
        \f	Form feed
        \n	Newline
        \r	Carriage return
        \t	Horizontal tab
        \v	Vertical tab
        \ooo	Octal number of one to three digits
        \xhh . . .	Hexadecimal number of one or more digits

*/

void CharConstants();
void CharConstants()
{
    printf("Hello\tWorld\n\n");
}

void CustomConstant();
void CustomConstant()
{
    printf("value of area : %d \n", LENGTH * WIDTH);
}

void ConstKeyWord();
void ConstKeyWord()
{
    const int LENGTHTWO = 12;
    const int WIDTHTWO = 2;
    printf("value of area : %d \n", LENGTHTWO * WIDTHTWO);
}

int main()
{
    CharConstants();
    CustomConstant();
    ConstKeyWord();

    return 0;
}