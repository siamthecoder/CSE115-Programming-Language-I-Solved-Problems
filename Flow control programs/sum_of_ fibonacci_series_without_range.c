#include <stdio.h>
int main()
{
    int i, n, n1 = 0, n2 = 1, sum, sum2 = 0;

    printf("Enter number of terms here : ");
    scanf("%d", &n);

    printf("The sum of fibonacci series is: ");

    for(i = 0; i < n; i++) {
        sum2 += n1;
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }

    printf("%d ", sum2);

    return 0;
}
