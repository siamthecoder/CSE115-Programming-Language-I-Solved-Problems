#include <stdio.h>
int p(int ara[], int on, int max, int size);

int p(int ara[], int on, int max,  int size)
{

    if(ara[on] > max) {
        max = ara[on];
    }

    if(on == size - 1) {
        //printf("\nLargest element of this array is: %d ", max);
        return max;
    }

    p(ara, on + 1, max, size);
}

int main()
{
    int array[50], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int larger = array[0];

    printf("\nLargest element of this array is: %d ", p(array, 0, larger, n));

    return 0;
}
