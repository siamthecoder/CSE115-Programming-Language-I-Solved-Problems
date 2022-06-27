// Write a program in C to copy the elements of one array into another array.

#include <stdio.h>
int main()
{
    int ara1[3], ara2[3], i;

    for(i = 0; i < 3; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &ara1[i]);
    }

    printf("\nThe elements stored into the first array are : \n");

    for(i = 0; i < 3; i++) {
        printf("%d ", ara1[i]);
    }

    for(i = 0; i < 3; i++) {
        ara2[i] = ara1[i];
    }

    printf("\n\nThe elements copied into the second array are : \n");

    for(i = 0; i < 3; i++) {
        printf("%d ", ara2[i]);
    }

    return 0;
}
