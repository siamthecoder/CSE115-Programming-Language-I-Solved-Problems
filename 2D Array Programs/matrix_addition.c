#include <stdio.h>
int main()
{
    int matrix1[100][100], matrix2[100][100], matrix3[100][100], row, col, i , j;

    printf("Enter value for row and col: ");
    scanf("%d%d", &row, &col);

    printf("Enter elements in row & column of matrix 1: \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements in row & column of matrix 2: \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }


    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant Matrix: \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
