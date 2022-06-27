#include <stdio.h>
int main()
{
    int ara[100], copy[100], i, j, n, largest, smallest, count = 0;


    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\n\telement %d: ", i + 1);
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

    largest = ara[0];
    smallest = ara[n - 1];

    printf("\nThe largest element found at position: ");
    copy[100];
    count = 0;

    for(i = 0; i < n; i++) {
       if(copy[i] == largest) {
            count++;
            if(count == 1) {
                printf("%d", i+1);
            }
            else if(count > 1) {
                printf(", %d", i+1);
            }
       }
    }

    printf("\nThe smallest element found at position: ");
    copy[100];
    count = 0;

    for(i = 0; i < n; i++) {
       if(copy[i] == smallest) {
            count++;
            if(count == 1) {
                printf("%d", i+1);
            }
            else if(count > 1) {
                printf(", %d", i+1);
            }
       }
    }
    return 0;
}
