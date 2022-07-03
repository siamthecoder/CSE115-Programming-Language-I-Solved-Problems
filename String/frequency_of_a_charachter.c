#include <stdio.h>
int main()
{
    char s1[50], ch;
    int i, j = 0, count = 0;

    printf("Enter a string: ");
    gets(s1);
    printf("Enter a character to see its frequency: ");
    scanf(" %c", &ch);

    for(i = 0; s1[i] != '\0'; i++) {
        if(ch == s1[i])
            count++;
    }

    printf("The frequency of %c is: %d.\n", ch, count);
    return 0;
}
