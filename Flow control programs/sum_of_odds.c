#include <stdio.h>
int main()
{
    int i, n, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += ((2 * i) - 1);
    }

    printf("The sum of odd numbers are: %d\n", sum);

    return 0;
}
