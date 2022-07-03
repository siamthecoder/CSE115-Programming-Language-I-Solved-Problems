#include <stdio.h>
char *rev(char *st);
int length_of_string(char ch[], int i);

char *rev(char *st)
{
    static int k = 0;
    static char reverse[100];

    if(*st) {
        rev(st + 1);
        reverse[k++] = *st;
    }

    return reverse;

}

int length_of_string(char ch[], int i) {

    static int j = 0;

    if(ch[i] == '\0') {
        return j;
    }
    j++;
    length_of_string(ch, i + 1);
}

int main()
{
    char s[100];
    char *reversing;

    int l, n, count;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    reversing = rev(s);
    l = length_of_string(s, 0);

    printf("The first string is: %s\n", s);
    printf("The reversed string is: %s\n", reversing);

    for(n = 0; n < l; n++) {
        if((s[n] == reversing[n] - 32) || (s[n] == reversing[n] + 32)) {
            count = 0;
        }
        else if(s[n] != reversing[n]) {
            count = 1;
        }
        else {
            count = 0;
        }
    }

    if(count == 0) {
        printf("Palindrome.\n");
    }
    else {
        printf("Not palindrome.\n");
    }

    return 0;
}
