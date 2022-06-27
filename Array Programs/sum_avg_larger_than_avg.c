#include <stdio.h>
int main()
{
    int ara[100], n, i, sum = 0;
    float avg;

    printf("\n\tEnter the size of the array: ");
    scanf("%d", &n);
    printf("\n\tInput the elements of the array: \n");

    for(i = 0; i < n; i++) {
        printf("\n\telement %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++) {
        sum += ara[i];
    }

    avg = (sum * 1.00) / n;

    printf("\n\tThe elements larger than average are: ");

    for(i = 0; i < n; i++) {
        if(ara[i] > avg) {
            printf("%d ", ara[i]);
        }
    }

    printf("\n\tThe sum is: %d, The average is: %f\n", sum, avg);
    return 0;
}
