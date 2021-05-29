#include <stdio.h>

// function declaration
// seems like you have to do this bllsht
int func();
void func2();

int main()
{
    // function call
    int i = func();
    func2();
    return i;
}

// function definition
int func()
{
    printf("func ran \n");
    return 0;
}

void func2()
{
    printf("func 2 ran  \n");
}