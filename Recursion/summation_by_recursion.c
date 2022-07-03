#include <stdio.h>
int summation(int n);

int summation(int n)
{
    if(n == 0) {
        return 0;
    }

    return summation(n - 1) + n;
}

int main()
{
    int a;

    scanf("%d", &a);

    printf("%d", summation(a));

    return 0;
}
