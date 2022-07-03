#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], reverse[100];
    int k = 0, i = 0, j = 0, l = 0, word_started, word_end;

    printf("Enter a string: ");
    gets(str);

    while(str[k] != '\0') {
        l++;
        k++;
    }

    word_started = l - 1;
    printf("word started: %d\n", word_started);
    word_end = l - 1;
    printf("word end: %d\n", word_end);

    while(word_started > 0) {
         if(str[word_started] == ' ') {
             i = word_started + 1;
             while(i <= word_end) {
                 reverse[j] = str[i];
                 i++;
                 j++;
             }

             reverse[j++] = ' ';
             word_end = word_started - 1;
         }
         word_started--;
    }

    for(k = 0; k <= word_end; k++) {
         reverse[j] = str[k];
         j++;
    }

    reverse[j] = '\0';

    puts(reverse);

    return 0;

}
