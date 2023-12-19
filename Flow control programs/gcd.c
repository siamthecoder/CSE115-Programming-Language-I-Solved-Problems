#include <stdio.h>
int main()
{
    int i, n1, n2, gcd;

    printf("\n\tEnter two numbers here: ");
    scanf("%d%d", &n1, &n2);

    if(n1 < 0) {
        n1 = n1 * -1;
    }
    if(n2 < 0) {
        n2 = n2 * -1;
    }

    for(i = 1; i <= n1 && i <= n2; i++) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    printf("\n\tThe GCD is: %d\n", gcd);
    return 0;
}
