#include <stdio.h>
int main()
{
    int number, i = 1, sum = 0;

    while(1) {
        printf("Enter your number here: ");
        scanf("%d", &number);
        i++;

        if(number < 0) {
            printf("Wrong!!\n");
            break;
        }
        if(number == 0) {
            break;
        }

        sum += number;

        if(i > 10) {
            printf("OK done.\n");
            break;
        }
    }

    printf("The sum of your given number is: %d\n", sum);

    return 0;
}

