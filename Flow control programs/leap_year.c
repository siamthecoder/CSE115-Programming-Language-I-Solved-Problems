#include <stdio.h>
int main()
{
    int y;

    printf("Enter year: ");
    scanf("%d", &y);

    if((y % 4 == 0) && ((y % 400 == 0) || (y % 100 != 0))) {
        printf("\nLeap Year\n");
    }
    else {
        printf("\nNot a leap Year\n");
    }

    return 0;
}
