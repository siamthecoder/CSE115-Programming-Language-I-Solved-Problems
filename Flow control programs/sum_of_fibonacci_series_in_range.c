#include <stdio.h>
int main()
{
    int i, n, n1 = 0, n2 = 1, sum;

    printf("Enter number of range here : ");
    scanf("%d", &n);

    printf("The fibonacci series is: ");

    while(n1 <= n) {
        printf("%d ", n1);
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }

    return 0;
}
