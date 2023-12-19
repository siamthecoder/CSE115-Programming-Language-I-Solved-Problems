#include <stdio.h>
int main()
{
    int password, i = 1;

    while(1) {
        printf("Enter your password: ");
        scanf("%d", &password);
        i++;

        if(password != 1234) {
            printf("Wrong password! Try again.\n");
            continue;
        }
        if(password == 1234) {
            printf("Correct password!\n");
            break;
        }
        if(i > 10) {
            printf("Wait for 2 minutes.\n");
            break;
        }
    }

    return 0;
}
