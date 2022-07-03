#include <stdio.h>
int adding(int n1, int n2);

int adding(int n1, int n2)
{
    static int s;
    if(n2 == 0) {
        return n1;
    }

    s = adding(n1, n2 - 1) + 1;
    return s;
}

int main()
{
    int a, b, sum;

    scanf("%d%d", &a, &b);

    sum = adding(a, b);

    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}
