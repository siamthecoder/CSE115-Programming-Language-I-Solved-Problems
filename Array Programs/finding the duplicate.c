#include <stdio.h>
int main()
{
    int ara[10] = { 50, 20, 10, 40, 20, 10, 10, 60, 30, 70}, i, j, count = 0, sum = 0;

    for(i = 0; i < 10; i++) {
        ara[i];
        count = 0;
        for(j = i + 1; j < 10; j++) {
            if(ara[i] == ara[j]) {
                count++;
                sum += count;
            }
            else if(ara[i] != ara[j]) {
                count = 0;
            }
        }
    }

    printf("Total number of duplicate elements found in the array is : %d\n", sum);
    return 0;
}
