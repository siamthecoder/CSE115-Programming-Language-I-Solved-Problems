#include <stdio.h>
#include <math.h>
int main()
{
    int n, p, r, i = 0, decimal = 0;

    printf("\n\tEnter your number in binary : ");
    scanf("%d", &n);

    p = n;

    while(p != 0) {
        r = p % 10;
        p = p / 10;
        decimal += (r * pow(2, i));
        i++;
    }

    printf("\n\tThe given number in decimal is: %d\n", decimal);

    return 0;
}
