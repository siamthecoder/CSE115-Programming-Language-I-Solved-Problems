#include <stdio.h>
int main()
{
    int m, n, maximum, minimum, max_row_location, max_col_location, min_row_location, min_col_location;

    printf("Enter value for m and n: ");
    scanf("%d%d", &m, &n);

    int matrix[100][100], i, j;

    printf("Enter matrix of %d x %d size: \n", m, n);

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The given matrix is: \n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    maximum = matrix[0][0];
    minimum = matrix[0][0];

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] > maximum) {
                maximum = matrix[i][j];
                max_row_location = i;
                max_col_location = j;
            }
            else if(matrix[i][j] < minimum) {
                minimum = matrix[i][j];
                min_row_location = i;
                min_col_location = j;
            }
        }
    }

    printf("\n\tMaximum value: %d\tIts location is: [%d][%d]\n", maximum, max_row_location, max_col_location);
    printf("\n\tMinimum value: %d\tIts location is: [%d][%d]\n", minimum, min_row_location, min_col_location);

    return 0;
}
