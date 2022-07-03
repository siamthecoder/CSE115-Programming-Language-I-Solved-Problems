#include <stdio.h>
int reverse(int num);

int reverse(int num)
{
    static int r, p, rev = 0;

    p = num;

    while(p != 0) {
        r = p % 10;
        rev = (rev * 10) + r;
        reverse(p / 10);
    }

    return rev;
}

int main()
{
    int a;

    scanf("%d", &a);

    printf("The reverse is %d\n", reverse(a));

    return 0;
}
