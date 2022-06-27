#include <stdio.h>
int main()
{
    int matrix1[100][100], matrix2[100][100], row, col, i , j;

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
            matrix2[i][j] = matrix1[j][i];
        }
    }

    printf("Transpose Matrix: \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%-3d ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
