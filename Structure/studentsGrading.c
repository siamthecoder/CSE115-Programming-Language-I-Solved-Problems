#include <stdio.h>
#include <string.h>

typedef struct {
    char first[20];
    char last[20];
} nametype;

typedef struct {
    int id;
    nametype name;
    char grade[3];
} std;

void studentsGrading(std* s, int mark) {

    if(mark >= 80) {
        strcpy(s->grade, "A+");
    }
    else if(mark >= 75) {
        strcpy(s->grade, "A");
    }
    else if(mark >= 70) {
        strcpy(s->grade, "A-");
    }
    else if(mark >= 60) {
        strcpy(s->grade, "B");
    }
    else {
        strcpy(s->grade, "F");
    }
}

int main()
{
    std student[5];
    int i;
    int marks[5] = {72, 82, 60, 60, 50};

    for(i = 0; i < 5; i++) {
        printf("Enter ID of student %d: ", i+1);
        scanf("%d", &student[i].id);

        printf("Enter first name of student %d: ", i+1);
        scanf("%s", &student[i].name.first);

        printf("Enter first name of student %d: ", i+1);
        scanf("%s", &student[i].name.last);

        printf("\n------------------\n");
    }

    for(i = 0; i < 5; i++) {
        studentsGrading(&student[i], marks[i]);
    }

    printf("-----------Output-----------\n\n");

    for(i = 0; i < 5; i++) {
        printf("ID: %d\n", student[i].id);

        printf("Name: %s %s\n", student[i].name.first, student[i].name.last);

        printf("Grade: %s\n", student[i].grade);

        printf("\n------------------\n");
    }

    return 0;

}
