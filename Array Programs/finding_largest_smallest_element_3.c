#include <stdio.h>
int main()
{
    int ara[100], copy[100], i, j, n, second_largest, count = 0;


    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\n\telement %d: ", i);
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++) {
        copy[i] = ara[i];
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(ara[i] < ara[j]) {
                int temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }

    second_largest = ara[1];
    printf("\nSecond largest value found: %d\n", second_largest);

    printf("\nOccurs in index: ");
    copy[100];
    count = 0;

    for(i = 0; i < n; i++) {
       if(copy[i] == second_largest) {
            count++;
            if(count == 1) {
                printf("%d", i);
            }
            else if(count > 1) {
                printf(", %d", i);
            }
       }
    }

    return 0;
}
