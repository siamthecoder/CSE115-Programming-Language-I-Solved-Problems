#include <stdio.h>
int q(int ara[], int on, int mini, int size);

int q(int ara[], int on, int mini,  int size)
{

    if(ara[on] < mini) {
        mini = ara[on];
    }
    if(on == size - 1) {
        //printf("\nSmallest element of this array is: %d", mini);
        return mini;
    }

    q(ara, on + 1, mini, size);
}

int main()
{
    int array[50], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int smaller = array[0];

    printf("\nSmallest element of this array is: %d\n", q(array, 0, smaller, n));

    return 0;
}
