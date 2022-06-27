#include <stdio.h>
int main()
{
    int ara[50], size, position, i, temp;

    printf("\n\tEnter the size of the array: ");
    scanf("%d", &size);

    printf("\n\tEnter the position where the value to be delete: ");
    scanf("%d", &position);

    printf("\n\tInput the elements of the array: \n");
    for(i = 0; i < size; i++) {
        printf("\n\telement %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    temp = ara[position - 1];

    for(i = position - 1; i < size; i++) {
        ara[i] = ara[i + 1];
    }
    size--;

    printf("\n\tResultant array is: ");
    for(i = 0; i < size; i++) {
        printf("%d ", ara[i]);
    }

    printf("\n\n\tThe deleted element is: %d\n", temp);

    return 0;
}
