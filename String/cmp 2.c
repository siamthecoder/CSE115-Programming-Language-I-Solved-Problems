#include<stdio.h>
int main()
{

    char string1[50],string2[50],*str1,*str2;
    int i,equal = 0;

    printf("Enter String1: ");
    scanf("%[^\n]", string1);
    printf("Enter String2: ");
    scanf(" %[^\n]", string2);

    str1 = string1;
    str2 = string2;

    while(*str1 == *str2)
    {

        if ( *str1 == '\0' || *str2 == '\0' )
            break;

        str1++;
        str2++;

    }

    if( *str1 == '\0' && *str2 == '\0' )
        printf("\n\nBoth Strings Are Equal.");

    else
        printf("\n\nBoth Strings Are Not Equal.");

}

