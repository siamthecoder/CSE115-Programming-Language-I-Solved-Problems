#include <stdio.h>
int main()
{
    int matrix1[100][100], row, col, i , j, row_sum[200] = {0}, col_sum[200] = {0};

    printf("Enter value for row and col: ");
    scanf("%d%d", &row, &col);

    printf("Enter elements in row & column of original matrix : \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }


    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            row_sum[i] += matrix1[i][j];
        }
    }

    for(i = 0; i < row; i++) {
        for(j = 0; j < row; j++) {
            col_sum[i] += matrix1[j][i];
        }
    }


    printf("Resultant Matrix: \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%-3d ", matrix1[i][j]);
        }
        printf("%-3d\n", row_sum[i]);
    }

    for(i = 0; i < col; i++) {
        printf("%-3d ", col_sum[i]);
    }


    return 0;
}

