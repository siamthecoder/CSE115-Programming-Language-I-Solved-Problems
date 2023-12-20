#include <stdio.h>

int main()
{
    struct student {
    int id;
    char* name;
    };

    struct student one;

    one.id = 212;
    one.name = "Md. Siam Hossain";

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
