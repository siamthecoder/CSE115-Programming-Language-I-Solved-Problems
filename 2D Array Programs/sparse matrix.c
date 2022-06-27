#include <stdio.h>
int main()
{
    int matrix[100][100], row, column, i, j, count = 0, recount = 0;

    printf("Enter the row and column size of the matrix: ");
    scanf("%d%d", &row, &column);

    printf("Enter the elements in row and column of matrix: \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("element- [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            if(matrix[i][j] == 0) {
                count++;
            }
            else if(matrix[i][j] != 0) {
                recount++;
            }
        }
    }

    if(count > recount) {
        printf("This is a sparse matrix.\n");
    }
    else if(count < recount) {
        printf("This is not a sparse matrix.\n");
    }

    return 0;
}
