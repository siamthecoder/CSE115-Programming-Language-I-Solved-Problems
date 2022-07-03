#include <stdio.h>
int p(int ara[], int on, int size);

int p(int ara[], int on, int size)
{
    static int sum = 0;

    if(on == size) {
        return 0;
    }

    sum += ara[on];
    p(ara, on + 1, size);

    return sum;
}

int main()
{
    int array[50], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("The sum is: %d\n", p(array, 0, n));

    return 0;
}
