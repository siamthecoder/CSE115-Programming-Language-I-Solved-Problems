#include <stdio.h>
int main()
{
    int matrix1[100][100], matrix2[100][100];
    int i, j, k, row1, col1, row2, col2, count;

    printf("Enter the row and column size of the first matrix: ");
    scanf("%d%d", &row1, &col1);

    printf("Enter the row and column size of the second matrix: ");
    scanf("%d%d", &row2, &col2);

    if(row1 == row2 && col1 == col2) {
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
                if(matrix1[i][j] != matrix2[i][j]) {
                    count = 1;
                    break;
                }
                else if(matrix1[i][j] == matrix2[i][j]) {
                    count = 0;
                }
            }
        }
    }
    else {
        printf("These two matrix can not be compared.\n");
        return 0;
    }

    if(count == 0) {
        printf("These two matrix are equal.\n");
    }
    else if(count == 1){
        printf("These two matrix are not equal.\n");
    }

    return 0;

}
