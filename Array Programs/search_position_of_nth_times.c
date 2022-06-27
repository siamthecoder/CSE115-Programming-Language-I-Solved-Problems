#include <stdio.h>
int main()
{
    int ara[100], i, n, num, times, found = 0, count = 0;

    printf("\n\tEnter the size of the array: ");
    scanf("%d", &n);

    printf("\n\tEnter the elements of the array: \n");

    for(i = 0; i < n; i++) {
        printf("\n\telement %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    printf("\n\tEnter the element you want to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(ara[i] == num) {
            count++;
            if(count == 1) {
                printf("\n\tEnter times of occurance of the element: ");
                scanf("%d", &times);
            }
            if(count == times) {
                found++;
                printf("\n\t%d found %d times at %d position.\n", num, times, i + 1);
                break;
            }
        }
    }

    if(count == 0) {
        printf("\n\t%d not found in the array.\n");
    }
    else if(found == 0) {
        printf("\n\t%d not found %d times.\n", num, times);
    }

    return 0;
}
