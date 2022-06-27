#include <stdio.h>
int main()
{
    int ara[10], ara_duplicates[20];
    int i, j, k, n, times = 0, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("element %d: ", i + 1);
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++) {
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
            for(j = 0; j < n; j++) {
                if(ara[i] == ara[j]) {
                    times++;
                }
                else if(ara[i] != ara[j]) {
                    times = times;
                }
            }
            printf("%d occurs: %d times\n", ara[i], times);
        }
    }

    return 0;
}
