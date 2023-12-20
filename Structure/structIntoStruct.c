#include <stdio.h>

int main()
{
    struct nametype {
        char first[30];
        char last[20];
    };

    struct student {
        int id;
        struct nametype name;
    };

    struct student one;

    scanf("%d", &one.id);
    scanf("%s", &one.name.first);
    scanf("%s", &one.name.last);

    printf("\n\nID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.first, one.name.last);

    return 0;
}

