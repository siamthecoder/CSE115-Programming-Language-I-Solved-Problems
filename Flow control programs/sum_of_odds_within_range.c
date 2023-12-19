#include <stdio.h>
int main()
{
    int i, min_range, max_range, sum = 0;

    printf("Enter minimum and maximum number of range: ");
    scanf("%d %d", &min_range, &max_range);

    for(i = min_range; i <= max_range; i++) {
        if(i % 2 != 0) {
            sum += i;
        }
    }

    printf("The sum of odd numbers in given range is: %d\n", sum);

    return 0;
}
