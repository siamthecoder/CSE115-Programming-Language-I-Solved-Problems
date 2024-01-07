#include <stdio.h>

void func()
{
    int a = 10; // newly assignment is being done each time this function being call
    static int s = 10; // saving the value for this variable only in this function scope until this runs

    a += 2;
    s += 2;

    printf("a = %d, s = %d\n", a, s);
}

int main()
{
    func();
    func();
    func();

    return 0;
}
