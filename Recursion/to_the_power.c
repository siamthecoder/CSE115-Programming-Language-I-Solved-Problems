#include <stdio.h>
int power(int num, int base);

int power(int num, int base)
{
    static int i = 0, p = 1;

    while(i < base) {
        p *= num;
        i++;
        power(num, base);
    }

    return p;
}

int main()
{
    int a, b, result;

    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the base: ");
    scanf("%d", &b);

    result = power(a, b);

    printf("%d to the power %d is %d\n", a, b, result);

    return 0;
}
