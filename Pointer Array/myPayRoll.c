 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

int main() {
    int i, choice, numOfEmployee, isStarted = 0;
    char** names; // a pointer to an unknown number of arrays


    while(1) {
        printf("\n   EMPLOYEE PAYROLL SYSTEM \n");
            printf("\n\n*****CHOOSE YOUR OPTION*****\n");

            printf("1) ADD NEW EMPLOYEE RECORD\n");
            printf("2) SHOW ALL RECORDS\n");
            printf("3) EXIT\n");
            printf("Enter your choice : ");
            scanf("%d", &choice);


        if(choice == 1) {
            printf("How many employees you have?: ");
            scanf("%d", &numOfEmployee);

            getchar();

            names = (char**)malloc(numOfEmployee * sizeof(char*)); // allocate memory for the array pointers
            isStarted++;

            for (int i = 0; i < numOfEmployee; i++) {
                printf("Name %d : ",i+1);
                names[i] = (char*)malloc(40); // allocate an array for the next name
                fgets(names[i], 40, stdin); //40 is your each name estimated length
            }
        }
        else if(choice == 2) {
            if(isStarted > 0) {
            printf("\n");
                for (int i = 0; i < numOfEmployee; i++) {
                    printf("%s\n", names[i]);
                }
            }
            else {
                printf("\nPlease insert infos first!\n");
            }
        }
        else if(choice == 3) {
            break; //breaking the while loop
        }
    }

    return 0;
}
