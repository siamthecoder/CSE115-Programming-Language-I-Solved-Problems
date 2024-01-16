#include <stdio.h>

int sum(int n)
{
    if(n != 0) {
        return n + sum(n - 1);
    }
    else {
        return n;
    }
}

int main()
{
    printf("%d\n", sum(10));

    return 0;
}
