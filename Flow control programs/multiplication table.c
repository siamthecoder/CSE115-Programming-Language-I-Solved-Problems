#include <stdio.h>
int main()
{
    int i, j, n, m = 0;

    printf("\n\tEnter n to show the multiplication table from 1 to n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        m += i;
        for(j = 1; j <= 10; j++) {
            printf("%d*%d=%d\t", j, i, m);
            m += i;
        }
        m = 0;
        printf("\n");
    }

    return 0;
}
