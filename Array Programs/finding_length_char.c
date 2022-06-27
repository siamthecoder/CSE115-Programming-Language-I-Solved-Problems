#include <stdio.h>
int main()
{
    char ara[] = {'K', 'B', 'B'};

    int length = sizeof(ara) / sizeof(ara[0]);

    printf("\n\tThe length of this array is: %d\n", length);

    return 0;
}
