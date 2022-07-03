#include <stdio.h>
int main()
{
    char s1[50], s2[50];
    int size1 = 0, size2 = 0, i, j, k, count = 0;

    printf("Enter 1st one: ");
    fgets(s1, 50, stdin);
    printf("Enter 2nd one: ");
    fgets(s2, 50, stdin);

    for(i = 0; s1[i] != '\0'; i++) {
        size1++;
    }
    for(j = 0; s2[j] != '\0'; j++) {
        size2++;
    }

    if(size1 != size2) {
        printf("Two strings are not equal.\n");
    }
    else {
        int length = size1 = size2;
        for(i = 0; i < length; i++) {
            if(s1[i] != s2[i]) {
                count++;
                break;
            }
        }
        if(count == 0) {
            printf("Two strings are equal\n");
        }
        else if(count != 0){
            printf("Two strings are not equal\n");
        }
    }

    return 0;
}
