#include <stdio.h>
void odd_even(int num_start, int num_end);

void odd_even(int num_start, int num_end)
{
    if(num_start > num_end) {
        return;
    }

    printf("%d ", num_start);
    odd_even(num_start + 2, num_end);
}

int main()
{
    int minimum_point, maximum_point, min, max;
    scanf("%d%d", &minimum_point, &maximum_point);


    if(minimum_point % 2 == 0) {
        printf("\nThe odd numbers: ");
        minimum_point = minimum_point + 1;
        odd_even(minimum_point, maximum_point);
    }
    else {
        printf("\nThe odd numbers: ");
        minimum_point = minimum_point;
        odd_even(minimum_point, maximum_point);
    }

    if(minimum_point % 2 != 0) {
        printf("\nThe even numbers: ");
        minimum_point = minimum_point + 1;
        odd_even(minimum_point, maximum_point);
    }
    else {
        printf("\nThe even numbers: ");
        minimum_point = minimum_point;
        odd_even(minimum_point, maximum_point);
    }

    return 0;
}

