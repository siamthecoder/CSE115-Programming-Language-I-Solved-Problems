#include <stdio.h>
char *rev(char *st);

char *rev(char *st)
{
    static int i = 0;
    static char reverse[100];

    if(*st) {
        rev(st + 1);
        reverse[i++] = *st;
    }

    return reverse;

}

int main()
{
    char s[100];
    char *reversing;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    reversing = rev(s);

    printf("The first string is: %s\n", s);
    printf("The reversed string is: %s\n", reversing);

    return 0;
}
