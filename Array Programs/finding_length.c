#include <stdio.h>
int main()
{
    int ara[] = {1, 2, 3, 4};

    int size_of_elements = sizeof(ara[0]);
    int size_of_array = sizeof(ara);

    int length = size_of_array / size_of_elements;

    printf("\n\tThe length of this array is: %d\n", length);

    return 0;
}
