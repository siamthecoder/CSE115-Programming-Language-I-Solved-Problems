#include <stdio.h>
int main()
{
    int ara[50], size, position, i, value;

    printf("\n\tEnter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the location where you wish to insert an element: ");
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    printf("\n\tInput the elements of the array: \n");
    for(i = 0; i < size; i++) {
        printf("\n\telement %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    for(i = size - 1; i >= position - 1; i--) {
        ara[i + 1] = ara[i];
    }
    size++;
    ara[position - 1] = value;

    printf("Resultant array is: \n");
    for(i = 0; i < size; i++) {
        printf("%d ", ara[i]);
    }

    return 0;
}
