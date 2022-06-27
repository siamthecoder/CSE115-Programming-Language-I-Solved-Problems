#include <stdio.h>
int main()
{
    int ara[20], n, i, sum = 1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\n\telement %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++) {
        sum *= ara[i];
    }

    printf("\n\tThe sum of the elements are: %d\n", sum);
    return 0;
}

