#include <stdio.h>
int main()
{
    int ara1[20], ara2[20], ara3[20], i, j, k, n;

    printf("Enter the size of these array: ");
    scanf("%d", &n);

    printf("Enter the elements of the first array: ");

    for(i = 0; i < n; i++) {
        printf("\n\telement %d: ", i + 1);
        scanf("%d", &ara1[i]);
    }

    printf("Enter the elements of the second array: ");

    for(j = 0; j < n; j++) {
        printf("\n\telement %d: ", j + 1);
        scanf("%d", &ara2[j]);
    }

    for(k = 0; k < n; k++) {
        ara3[k] = ara1[k] + ara2[k];
    }

    printf("The elements of the third array: \n");

    for(k = 0; k < n; k++) {
        printf("%d ", ara3[k]);
    }

    return 0;
}
