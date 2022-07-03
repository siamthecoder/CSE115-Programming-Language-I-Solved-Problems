#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int i;

    printf("Enter 1st string: ");
    gets(str1);

    printf("Enter 2nd string: ");
    gets(str2);

    i = strcmp(str2, str1);

    if(i == 0) {
        printf("Two strings are same\n");
    }
    else if(i == -1) {
        printf("2nd string is bigger.\n");
    }
    else if(i == 1) {
        printf("1st string is bigger.\n");
    }

    return 0;
}
