#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];

    printf("Enter 1st string: ");
    gets(str1);

    strrev(str1);

    printf("%s", str1);

    return 0;
}
