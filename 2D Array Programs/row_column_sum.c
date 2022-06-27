#include <stdio.h>
int main()
{
    int matrix1[100][100], row, col, i , j, row_sum = 0, col_sum = 0;

    printf("Enter value for row and col: ");
    scanf("%d%d", &row, &col);

    printf("Enter elements in row & column of original matrix : \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }


    for(i = 0; i < row; i++) {
        row_sum = 0, col_sum = 0;
        for(j = 0; j < row; j++) {
            row_sum += matrix1[i][j];
            col_sum += matrix1[j][i];
        }
        printf("\nSum of row %d is %d\n", i, row_sum);
        if(col_sum == 0) {
            printf("\nColumn is finished.\n");
        }
        else {
           printf("\nSum of column %d is %d\n", i, col_sum);
        }
    }


    return 0;
}
