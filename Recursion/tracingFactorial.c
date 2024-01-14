#include <stdio.h>
int f_calls = 0;

int factorial(int n)
{
    f_calls++;

    if(n == 0) {
        return 1;
    }

    return n * factorial(n-1);
}

int main()
{
    int num;

    scanf("%d", &num);

    printf("Factorial of %d is: %d\n", num, factorial(num));

    printf("%d\n", f_calls);

    return 0;
}

