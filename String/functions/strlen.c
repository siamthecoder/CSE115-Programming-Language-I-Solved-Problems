#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10], str2[10];

    printf("Enter 1st string: ");
    fgets(str1, 10, stdin);

    strcpy(str2, str1);

    puts(str2);

    return 0;
}
