#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("Value of x: %d\n", *p);
    printf("Address of x: %p\n", p);

    *p = 30;

    printf("Value of x: %d\n", *p);
    printf("Address of x: %p\n", p);

    return 0;
}
