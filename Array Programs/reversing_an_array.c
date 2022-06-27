#include <stdio.h>
int main()
{
    int ara[20], n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("element %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    printf("The original array: \n");

    for(i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }

    printf("\nReverse of array: \n");

    for(i = n - 1; i >= 0; i--) {
        printf("%d ", ara[i]);
    }

    return 0;
}
