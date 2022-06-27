#include <stdio.h>
int main()
{
    int matrix[100][100], row, column, i, j, count, recount;

    printf("Enter the row and column size of the matrix: ");
    scanf("%d%d", &row, &column);

    printf("Enter the elements in row and column of matrix: \n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            if(i == j) {
                if(matrix[i][j] == 1) {
                    count = 1;
                }
                else {
                    count = 0;
                    break;
                }
            }
            else {
                if(matrix[i][j] == 0) {
                    recount = 1;
                }
                else {
                    recount = 0;
                    break;
                }
            }
        }
    }

    if(count == 1 && recount == 1) {
        printf("This is an identity matrix.\n");
    }
    else if(count == 0 || recount == 0) {
        printf("This is not an identity matrix.\n");
    }

    return 0;
}
