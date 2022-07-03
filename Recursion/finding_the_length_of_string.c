#include <stdio.h>
void length_of_string(char ch[], int i);

void length_of_string(char ch[], int i) {

    static int j = 0;

    if(ch[i] == '\0') {
        printf("%d\n", j);
        return;
    }
    j++;
    length_of_string(ch, i + 1);
}

int main() {

    char str[50];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("The length of the string %s is: ", str);
    length_of_string(str, 0);

    return 0;
}

