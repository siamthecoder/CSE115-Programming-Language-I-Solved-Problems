#include <stdio.h>

int main()
{
    char str[20];
    int id;

    scanf("%d", &id);
    gets(str);

    fgets(str, 20, stdin);

    printf("%s", str);

    return 0;
}
