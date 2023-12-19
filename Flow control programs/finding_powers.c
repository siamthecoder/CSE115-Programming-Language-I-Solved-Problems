#include <stdio.h>
int main()
{
    int i, base, exponent, result , power = 1;

    printf("\n\tEnter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    for(i = 1; i <= exponent; i++) {
        power *= base;
    }

    printf("\n\tThe result is = %d\n", power);

    return 0;
}
