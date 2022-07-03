#include <stdio.h>
int main()
{
    int n, p, r, octal = 0, i = 1;

    printf("\n\tEnter your number in decimal : ");
    scanf("%d", &n);

    p = n;

    while(p != 0) {
        r = p % 8;
        p = p / 8;
        octal += (r * i);
        i *= 10;
    }

    printf("\n\tThe given number in octal is: %d\n", octal);

    return 0;
}
