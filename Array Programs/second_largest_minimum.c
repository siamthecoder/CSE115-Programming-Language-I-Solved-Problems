#include <stdio.h>
int main()
{
    int ara[100], i, j, n, temp;


    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("element %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(ara[i] < ara[j]) {
                temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }

    printf("Third largest element: %d\n", ara[2]);
    return 0;
}
