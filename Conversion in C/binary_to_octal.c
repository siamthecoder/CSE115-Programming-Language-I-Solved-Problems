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
    int q = decimal;
    int s, octal = 0, j = 1;

    while(q != 0) {
        s = q % 8;
        q = q / 8;
        octal += (s * j);
        j *= 10;
    }

    printf("\n\tThe given number in octal is: %d\n", octal);

    return 0;
}
