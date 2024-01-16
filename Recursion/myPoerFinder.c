#include <stdio.h>

int funCalls = 0;

int myPower(int base, int power)
{
    funCalls++;

    if(power == 0) {
        return 1;
    }

    return base * myPower(base, power - 1);
}

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);


    printf("%d to the power %d is: %d\n", a, b, myPower(a, b));
    printf("Fuction called: %d times\n", funCalls);

    return 0;
}
