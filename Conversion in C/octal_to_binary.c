#include <stdio.h>
#include <math.h>
int main()
{
    int n, p, r, i = 0, decimal = 0;

    printf("\n\tEnter your number in octal : ");
    scanf("%d", &n);

    p = n;

    while(p != 0) {
        r = p % 10;
        p = p / 10;
        decimal += (r * pow(8, i));
        i++;
    }
    int q = decimal;
    int s, binary = 0, j = 1;

    while(q != 0) {
        s = q % 2;
        q = q / 2;
        binary += (s * j);
        j *= 10;
    }

    printf("\n\tThe given number in binary is: %d\n", binary);

    return 0;
}
