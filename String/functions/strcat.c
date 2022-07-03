#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100] = "";

    printf("Enter 1st string: ");
    gets(str1);

    printf("Enter 2nd string: ");
    gets(str2);

    strncat(str2, str1, 4);

    printf("%s", str2);

    return 0;
}

