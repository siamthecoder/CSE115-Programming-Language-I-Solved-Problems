#include <stdio.h>
int main()
{
    int n, r, p, rev, zeros, non_zero, total_digits, sum = 0, sum_rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    p = n;
    rev = 0;
    non_zero = 0;
    total_digits = 0;

    while(p != 0) {
        r = p % 10;
        p = p / 10;
        total_digits++;
        rev = (rev * 10) + r;
        sum += r;
        sum_rev += r;
        if(r != 0) {
            non_zero++;
        }
        else if(r == 0) {
            zeros++;
        }
    }
    printf("\n\tTotal digits = %d\tReverse = %d\tSum = %d\tSum in reverse = %d\tNon zero digits = %d\tZeros = %d\n", total_digits, rev, sum, sum_rev, non_zero, zeros);

    return 0;
}
