#include <stdio.h>

int x = 1; // global variable

void myfunc(int x)
{
    x += 10;
    printf("myfnc, x = %d\n", x);
}

int main()
{
    int x = 24;

    myfunc(x);

    printf("main, x = %d\n", x); // forgets x as a global variable

    return 0;
}

