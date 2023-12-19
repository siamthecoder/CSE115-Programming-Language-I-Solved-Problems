#include <stdio.h>

void addTenOne(int a)
{
    a += 10;
}

void addTenTwo(int* a)
{
    *a += 10;
}

int main()
{
    int a;

    a = 5;

    addTenOne(a); //call by value

    printf("by Val)a = %d\n", a);

    addTenTwo(&a); //call by reference

    printf("by Ref)a = %d\n", a);

    return 0;
}
