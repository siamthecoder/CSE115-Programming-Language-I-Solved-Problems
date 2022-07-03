#include <stdio.h>
int printing_reversely(int n);

int printing_reversely(int n)
{
    if(n == 0) {
        return 0;
    }

    printf("%d ", (n));

    printing_reversely(n - 1);

    return 0;
}

int main()
{
    int a;

    scanf("%d", &a);

    printing_reversely(a);

    return 0;
}
