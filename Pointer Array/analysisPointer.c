#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    printf("Value of x: %d\n", x);

    p = &x;
    *p = 20; // Dereferencing : accessing x using ptr

    printf("Value of x: %d\n", x);

    x = 15;

    printf("Value of x: %d\n", x);

    printf("Address of x: %p\n", &x);
    printf("Address @ p: %p\n", p);

    return 0;
}
