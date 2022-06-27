#include <stdio.h>
int main()
{
    int ara[50], size, position, i, value;

    printf("\n\tEnter the size of the array: ");
    scanf("%d", &size);

    printf("\n\tEnter the value to insert: ");
    scanf("%d", &value);

    printf("\n\tInput the elements of the array(in ascending order): \n");
    for(i = 0; i < size; i++) {
        printf("\n\telement %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < size; i++) {
        if(value < ara[i]) {
            position = i;
            break;
        }
    }

    printf("%d", position);

    for(i = size - 1; i >= position; i--) {
        ara[i + 1] = ara[i];
    }
    size++;
    ara[position] = value;

    printf("Resultant array is: \n");
    for(i = 0; i < size; i++) {
        printf("%d ", ara[i]);
    }

    return 0;
}
