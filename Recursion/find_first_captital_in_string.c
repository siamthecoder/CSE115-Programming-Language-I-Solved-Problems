#include <stdio.h>
void capitalLetter(char ch[], int i);

void capitalLetter(char ch[], int i) {

    char cap;

    if(ch[i] >= 'A' && ch[i] <= 'Z') {
        cap = ch[i];
        printf("%c\n", cap);
        return;
    }

    capitalLetter(ch, i + 1);
}

int main() {

    char str[50];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("The first capital letter in the string %s is: ", str);
    capitalLetter(str, 0);

    return 0;
}


