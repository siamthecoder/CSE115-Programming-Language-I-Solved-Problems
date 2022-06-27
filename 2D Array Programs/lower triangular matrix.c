#include <stdio.h>
int main()
{
    int ara[100][100], row, column, i, j, count = 0, recount = 0;

    printf("Enter the row and column size of the matrix: ");
    scanf("%d%d", &row, &column);

    printf("Enter the elements in row and column of matrix: \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("element- [%d][%d]: ", i, j);
            scanf("%d", &ara[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            if(j > i) {
                ara[i][j] = 0;
            }
        }
    }

    printf("The Lower Triangular Matrix is: \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }
    return 0;
}
