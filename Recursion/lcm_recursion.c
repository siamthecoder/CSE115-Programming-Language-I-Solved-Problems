#include <stdio.h>
int lcm_of_two_num(int n1, int n2, int temp);

int lcm_of_two_num(int n1, int n2, int temp)
{
    static int lcm;

    if(temp % n1 == 0 && temp % n2 == 0) {
        lcm = temp;
        return lcm;
    }
    temp++;
    lcm_of_two_num(n1, n2, temp);
}

int main()
{
    int a, b, temp, lcm_is;

    scanf("%d%d", &a, &b);

    if(a > b) {
        temp = a;
    }
    else {
        temp = b;
    }

    lcm_is = lcm_of_two_num(a, b, temp);

    printf("LCM of %d and %d is: %d\n", a, b, lcm_is);

    return 0;
}
