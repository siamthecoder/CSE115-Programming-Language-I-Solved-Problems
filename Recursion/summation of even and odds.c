#include <stdio.h>
int odd_sum(int num_start, int num_end);
int even_sum(int n_start, int ending);

int odd_sum(int num_start, int num_end)
{
    static int sum = 0;

    if(num_start > num_end) {
        return 0;
    }

    sum += num_start;
    odd_sum(num_start + 2, num_end);

    return sum;
}

int even_sum(int n_start, int ending)
{
    static int summ = 0;

    if(n_start > ending) {
        return 0;
    }

    summ += n_start;
    even_sum(n_start + 2, ending);

    return summ;
}

int main()
{
    int minimum_point, maximum_point, min, max;
    scanf("%d%d", &minimum_point, &maximum_point);


    if(minimum_point % 2 == 0) {
        minimum_point = minimum_point + 1;
        printf("\nThe odd numbers sum is: %d\n", odd_sum(minimum_point, maximum_point));
    }
    else {
        minimum_point = minimum_point;
        printf("\nThe odd numbers sum is: %d\n", odd_sum(minimum_point, maximum_point));
    }

    if(minimum_point % 2 != 0) {
        minimum_point = minimum_point + 1;
        printf("\nThe even numbers sum is: %d\n", even_sum(minimum_point, maximum_point));
    }
    else {
        minimum_point = minimum_point;
        printf("\nThe even numbers sum is: %d\n", even_sum(minimum_point, maximum_point));
    }

    return 0;
}

