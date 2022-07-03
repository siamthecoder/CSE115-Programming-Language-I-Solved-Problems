#include <stdio.h>
int main()
{
    int n, r, p, bin = 0, i = 1;

    printf("\n\tEnter your number in decimal: ");
    scanf("%d", &n);

    p = n;

    while(p != 0) {
        r = p % 2;
        p = p / 2;
        bin += (r * i);
        i *= 10;
    }

    printf("\n\tThe given number in binary is: %d\n", bin);

    return 0;
}
