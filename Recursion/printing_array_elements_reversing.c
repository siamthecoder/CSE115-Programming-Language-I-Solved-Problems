#include <stdio.h>
void p(int ara[], int on);

void p(int ara[], int on)
{
    if(on == 0) {
        return;
    }

    printf("%d ", ara[on - 1]);
    p(ara, on - 1);
}

int main()
{
    int array[50], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    p(array, n);
}
