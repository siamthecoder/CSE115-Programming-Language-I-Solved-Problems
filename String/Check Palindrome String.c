#include <stdio.h>
int main()
{
    char s1[50], s2[50], s3[50];
    int length_of_s2 = 0, length_of_s3 = 0, length_of_s1 = 0, length_now = 0;
    int i, j = 0, k = 0, count = 0;

    printf("Enter 1st one: ");
    gets(s1);

    for(i = 0; s1[i] != '\0'; i++) {
        s2[j] = s1[i];
        j++;
    }

    s2[j] = '\0';

    for(i = 0; s2[i] != '\0'; i++) {
        length_of_s2++;
    }

    for(i = length_of_s2 - 1; i >= 0; i--) {
        s3[k] = s2[i];
        k++;
    }

    s3[k] = '\0';

    for(i = 0; s1[i] != '\0'; i++) {
        length_of_s1++;
    }

    for(i = 0; s3[i] != '\0'; i++) {
        length_of_s3++;
    }

    if(length_of_s1 != length_of_s3) {
        printf("\n\tThis is not palindrome\n");
    }
    else if(length_of_s1 == length_of_s3) {
        length_now = length_of_s1 = length_of_s3;
        count = 0;
        for(i = 0; i < length_now; i++) {
            if((s1[i] == s3[i] - 32) || (s1[i] == s3[i] + 32)) {
                count = 0;
            }
            else if(s1[i] != s3[i]) {
                count++;
                break;
            }
            else {
                count = 0;
            }
        }
        if(count == 0) {
            printf("\n\tThis is Palindrome.\n");
        }
        else {
            printf("\n\tNot palindrome.\n");
        }
    }

    return 0;
}
