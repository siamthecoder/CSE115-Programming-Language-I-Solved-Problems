#include <stdio.h>

int main()
{
    struct student {
    int id;
    char name[50];
    };

    struct student one;

    scanf("%d", &one.id);
    scanf(" %[^\n]", one.name);

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}

