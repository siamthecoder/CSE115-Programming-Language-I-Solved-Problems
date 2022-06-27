// Write a program in C to find the sum of all elements of the array.
#include <stdio.h>
int main()
{
    int ara[3], i, sum = 0;

    for(i = 0; i < 3; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < 3; i++) {
        sum += ara[i];
    }

    printf("Sum of all elements stored in the array is: %d\n", sum);
    return 0;
}

