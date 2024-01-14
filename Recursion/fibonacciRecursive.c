#include <stdio.h>
#include <string.h>

int fiboCalls = 0;

int fib(int n)
{
    fiboCalls++;

    if(n == 1 || n == 2) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int num;
    char script[3];

    scanf("%d", &num);

    if(num == 1) {
        strcpy(script, "st");
    }
    else if(num == 2) {
        strcpy(script, "nd");
    }
    else if(num == 3) {
        strcpy(script, "rd");
    }
    else {
        strcpy(script, "th");
    }

    printf("%d%s fibonacci number is: %d\n", num, script, fib(num));

    printf("%d\n", fiboCalls);

    return 0;
}
