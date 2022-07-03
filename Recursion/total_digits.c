#include <stdio.h>
int total_digits(int num);

int total_digits(int num)
{
    static int r, p, i = 0;

    p = num;

    while(p != 0) {
        r = p % 10;
        i++;
        total_digits(p / 10);
    }

    return i;
}

int main()
{
    int a;

    scanf("%d", &a);

    printf("Total digits: %d\n", total_digits(a));

    return 0;
}
