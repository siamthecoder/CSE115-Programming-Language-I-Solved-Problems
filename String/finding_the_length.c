#include <stdio.h>
int main()
{
    char str1[100];
    int i;

    scanf("%[^\n]", str1);

    for(i = 0; str1[i] != '\0'; i++);

    printf("The length is: %d\n", i);
    return 0;
}
