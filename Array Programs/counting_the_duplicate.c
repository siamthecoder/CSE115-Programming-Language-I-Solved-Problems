#include <stdio.h>
int main()
{
    int ara[11] = {78, 60, 55, 78, 55}, ara2[20];
    int i, j, k, l = 0, times = 0, count = 0, sum = 0;

    for(i = 0; i < 5; i++) {
        ara[i];
        times = 0;
        k = 0;
        if(i > 0) {
            count = 0;
            for(j = 0; j < i; j++) {
                if(ara[i] == ara[j]) {
                    count++;
                    break;
                }
            }
            if(count == 0) {
                k = 0;
            }
        }
        if(k == 0 && count == 0) {
            for(j = 0; j < 5; j++) {
                if(ara[i] == ara[j]) {
                    times++;
                }
                else if(ara[i] != ara[j]) {
                    times = times;
                }
            }
            if(times > 1) {
                sum++;
            }
        }
    }

    printf("\nTotal duplicates are: %d\n", sum);

    return 0;
}
