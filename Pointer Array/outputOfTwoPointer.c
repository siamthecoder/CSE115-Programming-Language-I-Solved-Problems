#include <stdio.h>

int main()
{
    int x = 10;
    int y;
    int *p, *q; // *: dereferencing ptr

    p = &x;
    q = &y;
    y = *p;
    *p = 20; // Dereferencing
    *q = 36;

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of *p: %d\n", *p);
    printf("Value of *q: %d\n", *q);


    return 0;
}

