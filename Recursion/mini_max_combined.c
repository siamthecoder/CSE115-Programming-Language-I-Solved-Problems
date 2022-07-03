#include <stdio.h>
int mini(int ara[], int set, int min, int ara_size);
int max(int a[], int start, int maxim, int arra_size);

int max(int a[], int start, int maxim, int arra_size)
{

    if(a[start] > maxim) {
        maxim = a[start];
    }

    if(start == arra_size - 1) {
        return maxim;
    }

    max(a, start + 1, maxim, arra_size);
}

int mini(int ara[], int set, int min,  int ara_size)
{

    if(ara[set] < min) {
        min = ara[set];
    }
    if(set == ara_size - 1) {
        return min;
    }

    mini(ara, set + 1, min, ara_size);
}

int main()
{
    int array[50], n, s, i, larger, smaller;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    s = n;

    printf("Enter the array elements: \n\n");
    for(i = 0; i < n; i++) {
        printf("element[%d]: ", i + 1);
        scanf("%d", &array[i]);
    }

    larger = array[0];

    printf("\nMaximum element of this array is: %d\n", max(array, 0, larger, s));

    smaller = array[0];

    printf("\nMinimum element of this array is: %d\n", mini(array, 0, smaller, n));

    return 0;
}
