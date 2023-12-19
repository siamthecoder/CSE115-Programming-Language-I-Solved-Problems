#include <stdio.h>
int main()
{
    int i, n, sum = 0;

    printf("Enter n value : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (i * i);
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
