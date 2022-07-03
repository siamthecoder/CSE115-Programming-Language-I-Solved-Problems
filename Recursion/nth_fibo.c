#include <stdio.h>

int nth_pell(int n)
{
    if (n <= 2) {
        return n;
    }

    return 2 * nth_pell(n - 1) + nth_pell(n - 2);
}

// driver function
int main()
{
    int n;

    printf("Enter the value of n:(N.B: n > 2): ");
    scanf("%d", &n);

    printf("The %dth pell number is: %d\n", n, nth_pell(n));
    return 0;
}
