#include <stdio.h>
int deci_to_binary(int num_decimal);

int deci_to_binary(int num_decimal)
{
    static int r, p, bin = 0, i = 1;

    p = num_decimal;

    while(p != 0) {
        r = p % 2;
        bin += (r * i);
        i *= 10;
        deci_to_binary(p / 2);
    }

    return bin;
}

int main()
{
    int a;

    scanf("%d", &a);

    printf("This number in binary: %d\n", deci_to_binary(a));

    return 0;
}
