#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];

    printf("Enter 1st string: ");
    fgets(str1, 100, stdin);

    strncpy(str2, str1, 4);

    puts(str2);

    return 0;
}
