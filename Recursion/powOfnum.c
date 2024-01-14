#include <stdio.h>

int myPow(int base, int power)
{
    if(power == 0) {
        return 1;
    }

    return base * myPow(base, power - 1);
}

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    printf("%d to the power %d is: %d\n", a, b, myPow(a, b));

    return 0;
}
