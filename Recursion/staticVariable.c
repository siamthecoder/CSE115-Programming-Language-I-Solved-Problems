#include <stdio.h>

int a;
static int b; // only accessible within this file

void func()
{
    a += 1;
    b += 1;
}

int main()
{
    func();

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
