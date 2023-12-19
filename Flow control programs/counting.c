#include <stdio.h>
int main()
{
    int num, p, r, total_digits = 0;

    printf("\n\tEnter a number: ");
    scanf("%d", &num);

    p = num;

    while(p != 0) {
        r = p % 10;
        p = p / 10;
        total_digits++;
    }

    printf("\n\tThe number of digits: %d\n", total_digits);

    return 0;
}
