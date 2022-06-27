#include <stdio.h>
int main()
{
    int ara1[20], n, i, ara2[20];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("element %d: ", i + 1);
        scanf("%d", &ara1[i]);
        ara2[i] = ara1[i];
    }

    printf("The original array: \n");

    for(i = 0; i < n; i++) {
        printf("%d ", ara1[i]);
    }

    printf("\nCopy of this array: \n");

    for(i = 0; i < n; i++) {
       printf("%d ", ara2[i]);
    }

    ara1[0] = 90;
    ara1[1] = 80;

    printf("\n\nThe original array after modification: \n");

    for(i = 0; i < n; i++) {
        printf("%d ", ara1[i]);
    }
    for(i = 0; i < n; i++) {
        ara2[i] = ara1[i];
    }

    printf("\nCopy of this array: \n");

    for(i = 0; i < n; i++) {
       printf("%d ", ara2[i]);
    }


    return 0;
}
