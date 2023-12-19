#include <stdio.h>
int main()
{
    int num, p, r, sum_of_digits = 0;

    printf("\n\tEnter a number: ");
    scanf("%d", &num);

    p = num;

    while(p != 0) {
        r = p % 10;
        p = p / 10;
        sum_of_digits += r;
    }

    printf("\n\tThe Sum of total digits: %d\n", sum_of_digits);

    return 0;
}
