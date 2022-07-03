#include <stdio.h>
int check_prime(int num);

int check_prime(int num)
{
    static int i = 2, r;

    while(i <= (num / 2)) {
        if((num % 2) == 0) {
            r = 1;
            return r;
        }
        if(i > (num / 2)) {
            r = 0;
        }
        i++;
        check_prime(num);
    }

    return r;
}

int main()
{
    int a, check;

    scanf("%d", &a);

    check = check_prime(a);

    if(check == 1) {
        printf("Not a Prime number.\n");
    }
    else {
        printf("Prime number.\n");
    }

    return 0;

}
