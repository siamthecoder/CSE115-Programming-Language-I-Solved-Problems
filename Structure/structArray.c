#include <stdio.h>
#include <string.h>

typedef struct {
        char first[30];
        char last[20];
    } nametype;

    struct student {
        int id;
        nametype name;
    };

int main()
{

    struct student std[5];
    int i, n = 5;

    for(i = 0; i < n; i++) {
        printf("Enter ID for student %d: ", i + 1);
        scanf("%d", &std[i].id);

        printf("Enter first name of student %d: ", i + 1);
        scanf("%s", std[i].name.first);

        printf("Enter last name of student %d: ", i + 1);
        scanf("%s", std[i].name.last);

        printf("---------------------------\n");
    }

    printf("\n------>Output------>\n");

    for(i = 0; i < n; i++) {
        printf("ID: %d\n", std[i].id);
        printf("Name: %s %s\n", std[i].name.first, std[i].name.last);

        printf("---------------------------\n");
    }

    return 0;
}


