#include <stdio.h>
int main()
{
    float ara[] = {1.5, 2.9, 3.2, 4.5};

    int length = sizeof(ara) / sizeof(ara[0]);

    printf("\n\tThe length of this array is: %d\n", length);

    return 0;
}

