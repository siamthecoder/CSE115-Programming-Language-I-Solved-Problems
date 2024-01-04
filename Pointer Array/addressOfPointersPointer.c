#include <stdio.h>

int main()
{
    int a = 10;
    int *p, **q;

    p = &a;
    q = &p;

    **q = 7;

    printf("Value of a: %d\n", a);
    printf("Value @ p: %d\n", *p);
    printf("Value @ q: %d\n", **q);

    return 0;
}

