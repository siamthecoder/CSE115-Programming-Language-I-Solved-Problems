#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numOfStudent;
    int *marks;

    printf("Enter the number of students: ");
    scanf("%d", &numOfStudent);

    // now allocating memory
    marks = (int *)malloc(sizeof(int) * numOfStudent);

    printf("Enter the marks of students: \n");
    for(int i = 0; i < numOfStudent; i++) {
        scanf("%d", &marks[i]);
    }

    printf("The marks of students: \n");
    for(int i = 0; i < numOfStudent; i++) {
        printf("%d\n", marks[i]);
    }

    // freeing the memory
    free(marks);

    return 0;
}
