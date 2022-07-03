#include <stdio.h>
int gcd_of_two_num(int n1, int n2);

int gcd_of_two_num(int n1, int n2)
{
    if(n1 > n2) {
        gcd_of_two_num(n1 - n2, n2);
    }
    else if(n2 > n1) {
        gcd_of_two_num(n1, n2 - n1);
    }
    else {
        return n1;
    }
}

int main()
{
    int a, b, gcd_is;

    scanf("%d%d", &a, &b);

    gcd_is = gcd_of_two_num(a, b);

    printf("GCD of %d and %d are: %d\n", a, b, gcd_is);

    return 0;
}
