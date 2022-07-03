#include <stdio.h>
int printing(int n);

int printing(int n)
{
    if(n == 0) {
        return 0;
    }

    printing(n - 1),(n);

    printf("%d ", (n));
    return 0;
}

int main()
{
    int a;

    scanf("%d", &a);

    printing(a);

    return 0;
}
