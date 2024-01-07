#include <stdio.h>

int x = 1; // global variable

void myfunc(int y)
{
    y *= 2; // local variable for this scope, which copies the value of main y's value
    x += 10;
    printf("myfnc, x = %d, y = %d\n", x, y);
}

int main()
{
    int y = 5; // local variable in main function

    x = 10;

    myfunc(y);

    printf("main, x = %d, y = %d\n", x, y);

    return 0;
}
