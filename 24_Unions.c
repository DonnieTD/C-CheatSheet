#include <stdio.h>
#include <string.h>
/*
    A union is a special data type available in C that allows storing different data types in the same memory location.

    Differs form struct by the memory sameness
*/

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{

    union Data data;

    printf("Memory size occupied by data : %d\n", sizeof(data));

    return 0;
}