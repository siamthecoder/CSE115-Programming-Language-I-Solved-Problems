#include <stdio.h>
int main()
{
    int ara1[20], ara2[20], ara3[20], n1, n2, n3, i, j = 0, k;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the first array: \n");
    for(i = 0; i < n1; i++) {
        printf("element %d: ", i + 1);
        scanf("%d", &ara1[i]);
    }

    printf("Enter the elements of the second array: \n");
    for(i = 0; i < n2; i++) {
        printf("element %d: ", i + 1);
        scanf("%d", &ara2[i]);
    }

    for(i = 0; i < n1; i++) {
        ara3[j] = ara1[i];
        j++;
    }
    for(i = 0; i < n1; i++) {
        ara3[j] = ara2[i];
        j++;
    }

    n3 = n1 + n2;

    for(k = 0; k < n3; k++) {
        for(i = k + 1; i < n3; i++) {
            if(ara3[k] > ara3[i]) {
                int temp = ara3[i];
                ara3[i] = ara3[k];
                ara3[k] = temp;
            }
        }
    }

    printf("\n\nMerged Array: \n");

    for(k = 0; k < n3; k++) {
        printf("%d ", ara3[k]);
    }

    return 0;
}
