#include <stdio.h>

int main()
{
    char str[20];
    int id;

    scanf("%d", &id);
    scanf(" %[^\n]%*c", str);

    printf("%s", str);

    return 0;
}

