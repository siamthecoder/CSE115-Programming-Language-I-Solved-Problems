#include <stdio.h>
void p(int ara[], int on, int size);

void p(int ara[], int on, int size)
{
    if(on == size) {
        return;
    }

    printf("%d ", ara[on]);
    p(ara, on + 1, size);
}

int main()
{
    int array[50], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    p(array, 0, n);
}
