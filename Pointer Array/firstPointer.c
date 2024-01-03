#include <stdio.h>

int main()
{
    int a;
    int *p; //integer pointer p

    a = 10;
    p = &a;

    printf("*p = %d\n", *p); // *p : value print(means content of p)
    printf("Value of p is %p\n", p); // p : contain the address of a variable

    return 0;
}
