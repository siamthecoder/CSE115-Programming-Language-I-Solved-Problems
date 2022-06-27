#include <stdio.h>
int main()
{
    int city, day, temperature[10][10];

    for(city = 0; city < 2; city++) {
        for(day = 0; day < 7; day++) {
            printf("City[%d], Day[%d]: ", city + 1, day + 1);
            scanf("%d", &temperature[city][day]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(city = 0; city < 2; city++) {
        for(day = 0; day < 7; day++) {
            printf("City[%d], Day[%d]: %d\n", city + 1, day + 1, temperature[city][day]);
        }
        printf("\n");
    }

    return 0;
}
