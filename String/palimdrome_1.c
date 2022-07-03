#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50];
    char temp[50];
    int cmp;

    printf("\n\tEnter first string: ");
    gets(s1);

    strcpy(temp, s1);

    strrev(s1);

    cmp = strcmp(s1, temp);

    if(cmp == 0) {
        printf("\n\tThis is palindrome.\n");
    }
    else {
        printf("\n\tThis is not palindrome.\n");
    }

    return 0;
}
