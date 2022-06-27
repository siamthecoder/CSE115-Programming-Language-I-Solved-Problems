#include <stdio.h>
int main()
{
    int matrix1[100][100], matrix2[100][100];
    int product_matrix[100][100];
    int i, j, k, row1, col1, row2, col2, sum = 0;

    printf("Enter the row and column size of the first matrix: ");
    scanf("%d%d", &row1, &col1);

    printf("Enter the row and column size of the second matrix: ");
    scanf("%d%d", &row2, &col2);

    if(col1 != row2) {
        printf("Sorry! These two matrix cant be multiplied.\n");
    }
    else {
        printf("Enter the elements in row and column of 1st matrix: \n");

        for(i = 0; i < row1; i++) {
            for(j = 0; j < col1; j++) {
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter the elements in row and column of 2nd matrix: \n");

        for(i = 0; i < row2; i++) {
            for(j = 0; j < col2; j++) {
                scanf("%d", &matrix2[i][j]);
            }
        }

        for(i = 0; i < row1; i++) {
            for(j = 0; j < col2; j++) {
                for(k = 0; k < row2; k++) {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                product_matrix[i][j] = sum;
                sum = 0;
            }
        }
        printf("\nThe Resultant matrix is: \n");

        for(i = 0; i < row1; i++) {
            for(j = 0; j < col2; j++) {
                printf("%-3d", product_matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
