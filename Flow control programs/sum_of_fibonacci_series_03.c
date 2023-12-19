#include <stdio.h>
int main()
{
    int i, n, n1 = 0, n2 = 1, sum;

    printf("Enter number of terms here : ");
    scanf("%d", &n);

    printf("The fibonacci series is: ");

    for(i = 0; i < n; i++) {
        printf("%d ", n1);
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }

    return 0;
}
