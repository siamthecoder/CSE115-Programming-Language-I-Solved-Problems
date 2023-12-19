#include <stdio.h>
int main()
{
    int i, n, n1 = 0, n2 = 1, sum;

    printf("Enter number of terms here : ");
    scanf("%d", &n);

    printf("The fibonacci series is: ");

    for(i = 1; i < n; i++) {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }

    printf("%d ", n1);

    return 0;
}
