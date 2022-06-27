#include <stdio.h>
int main()
{
    int ara[10], i, j,  n, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("element %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++) {
        ara[i];
        count = 0;
        for(j = 0; j < n; j++) {
            if(i == j) {
                count = 0;
            }
            else if(ara[i] == ara[j]) {
                count++;
                break;
            }
        }
        if(count == 0) {
            printf("%d ", ara[i]);
        }
    }

    return 0;
}
