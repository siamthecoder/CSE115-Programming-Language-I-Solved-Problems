#include <stdio.h>
int main()
{
    int ara[100][100], i, j, n, m = 0, sum = 0;

    printf("Input size of the 'square matrix' : ");
    scanf("%d", &n);

    m = n;

    printf("Enter the elements in row and column of matrix: \n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("element- [%d][%d]: ", i, j);
            scanf("%d", &ara[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        m = m - 1;
        for(j = 0; j < n; j++) {
           if(j == m) {
             sum += ara[i][j];
           }
        }
    }

    printf("Addition of the left Diagonal elements is : %d\n", sum);
    return 0;
}
