#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *marks;
    int i, n;
    printf("Please enter the number of students: ");
    scanf("%d", &n);

    //now allocate memory
    marks = (int *)malloc(sizeof(int) * n);

    printf("\nEnter the marks of each student: \n");

    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // printing the marks array
    for(i = 0; i < n; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;


}
