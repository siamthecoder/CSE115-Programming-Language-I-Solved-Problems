#include <stdio.h>
int sum_of_digits(int num);

int sum_of_digits(int num)
{
    static int r, p, sum = 0;

    p = num;

    while(p != 0) {
        r = p % 10;
        sum += r;
        sum_of_digits(p / 10);
    }

    return sum;
}

int main()
{
    int a;

    scanf("%d", &a);

    printf("Total sum of digits: %d\n", sum_of_digits(a));

    return 0;
}
