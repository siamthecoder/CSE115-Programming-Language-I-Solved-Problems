#include <stdio.h>
int main()
{
    char s1[50], s2[50];
    int i, j = 0;

    printf("Enter a string: ");
    gets(s1);

    for(i = 0; s1[i] != '\0'; i++) {
        if((s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z')) {
            s2[j] = s1[i];
            j++;
        }
    }

    s2[j] = '\0';

    puts(s2);
    return 0;
}
