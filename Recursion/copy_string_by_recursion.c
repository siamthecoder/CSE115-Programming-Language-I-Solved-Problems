#include <stdio.h>
void copy(char s1[], char s2[], int n);

void copy(char s1[], char s2[], int n)
{

    s2[n] = s1[n];

    if (s1[n] == '\0') {
        printf("%s\n", s2);
        return;
    }
    copy(s1, s2, n + 1);

}

int main()
{
    char st1[20], st2[20];

    printf("Enter string to copy: ");
    scanf("%[^\n]s", st1);

    printf("\nCopy is successful\n\n");
    printf("The first string is: %s\n", st1);
    printf("The second string is: ");
    copy(st1, st2, 0);

    return 0;
}
