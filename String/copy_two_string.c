#include <stdio.h>
int main()
{
    char str1[50], str2[50];
    int i, j =0, l = 0;

    printf("\n\tGive 1st string: ");
    scanf("%[^\n]", str1);

    for(i = 0; str1[i] != '\0'; i++) {
        l++;
    }

    for(i = 0; i < l; i++) {
        str2[j] = str1[i];
        j++;
    }

    str2[j] = '\0';

    printf("\n\tCopied string is: ");
    puts(str2);
    printf("\n\t%d\n", j + 1);
    return 0;
}
