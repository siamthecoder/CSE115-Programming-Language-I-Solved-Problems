#include <stdio.h>
int main()
{
    int ara[20], n, i, j, temp;

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

    printf("\nReverse of this array: \n");

    for(i = 0, j = n - 1; i < n; i++, j--) {
        temp = ara[j];
        ara[j] = ara[i];
        ara[j] = temp;
        printf("%d ", ara[j]);
    }

    return 0;
}
