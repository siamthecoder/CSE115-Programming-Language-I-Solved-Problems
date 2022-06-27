#include <stdio.h>
int main()
{
    int ara[3][2], row, col;

    for(row = 0; row < 3; row++) {
        for(col = 0; col < 2; col++) {
            printf("\n\t[%d][%d]: ", row, col);
            scanf("%d", &ara[row][col]);
        }
        printf("\n");
    }

    for(row = 0; row < 3; row++) {
        for(col = 0; col < 2; col++) {
            printf("\t%d ", ara[row][col]);
        }
        printf("\n");
    }

    return 0;
}
