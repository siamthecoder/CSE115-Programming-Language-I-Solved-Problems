#include <stdio.h>
int main()
{
    int i, n, factorial = 1;

    printf("\n\tEnter a number to find its factorial: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        factorial *= i;
    }

    printf("\n\tThe factorial is: %d\n", factorial);

    return 0;
}
