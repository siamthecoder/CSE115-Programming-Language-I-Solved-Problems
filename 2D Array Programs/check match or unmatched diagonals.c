#include <stdio.h>
int main()
{
    int ara[100][100], ara2[100][100];
    int r, c, i, j, m, n, k = 0, l = 0, count = 0;
    int right_diagonal[100], left_diagonal[100];

    printf("Input row and column number of two 'square matrix' : ");
    scanf("%d%d", &r, &c);

    m = r = c;

    printf("Enter the elements in row and column of 1st matrix: \n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("element- [%d][%d]: ", i, j);
            scanf("%d", &ara[i][j]);
        }
    }
    printf("Enter the elements in row and column of 2nd matrix: \n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("element- [%d][%d]: ", i, j);
            scanf("%d", &ara2[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
           if(i == j) {
             right_diagonal[k] = ara[i][j];
             k++;
           }
        }
    }

     for(i = 0; i < r; i++) {
        m = m - 1;
        for(j = 0; j < c; j++) {
           if(j == m) {
             left_diagonal[l] = ara2[i][j];
             l++;
           }
        }
    }
    for(i = 0; i < k; i++) {
            printf("%d ", right_diagonal[i]);
        }
    for(i = 0; i < l; i++) {
            printf("%d ", left_diagonal[i]);
        }

    if(k != l) {
        printf("Diagonals not matched.\n");
    }
    else {
        k = l;
        for(i = 0; i < k; i++) {
            if(right_diagonal[i] != left_diagonal[i]) {
                count++;
                break;
            }
            else {
                count = 0;
            }
        }
        if(count == 0) {
            printf("Diagonals matched.\n");
        }
        else if(count > 0) {
            printf("Diagonals not matched.\n");
        }
    }

    return 0;
}
