#include <stdio.h>
int main()
{
    char str1[50], str2[50], str3[50];
    int i, j =0;

    printf("\n\tGive 1st string: ");
    gets(str1);
    printf("\n\tGive 2nd string: ");
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++) {
        str3[j] = str1[i];
        j++;
    }

    str3[j] = ' ';
    j++;

    for(i = 0; str2[i] != '\0'; i++) {
        str3[j] = str2[i];
        j++;
    }

    str3[j] = '\0';

    printf("\n\tNow the string is: ");
    puts(str3);
    return 0;
}
