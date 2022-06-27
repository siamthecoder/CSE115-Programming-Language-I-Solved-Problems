#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrix1[100][100], matrix2[100][100], m, n, i , j;

    printf("Enter value for row and col: ");
    scanf("%d%d", &m, &n);

    printf("Enter elements in row & column of original matrix : \n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }


    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            matrix2[i][j] = matrix1[j][i];
        }
    }

    printf("Transpose Matrix: \n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%-3d ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
