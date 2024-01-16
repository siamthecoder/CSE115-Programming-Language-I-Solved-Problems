#include <stdio.h>

int fCalls = 0;
int fibo[50];

int fib(int n)
{
    fCalls++;

    if(fibo[n] != 0) {
        return fibo[n];
    }

    if(n == 1 || n == 2) {
        return fibo[n];
    }

    fibo[n] = fib(n-1) + fib(n-2);

    return fibo[n];
}

int main()
{
    int n;

    fibo[1] = 1;
    fibo[2] = 1;

    scanf("%d", &n);

    printf("%d no fibonacci number is: %d\n", n, fib(n));
    printf("Total call is: %d\n", fCalls);

    for(int i = 1; i < 12; i++) {
        printf("%d no fibo: %d\n", i, fibo[i]);
    }

    return 0;
}
