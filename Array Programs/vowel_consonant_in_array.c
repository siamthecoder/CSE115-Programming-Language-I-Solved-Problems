#include <stdio.h>
int main()
{
    char ara_original[100], ara_vowel[100], ara_consonant[100];

    int i, j = 0, k = 0, n;
    char space;

    printf("Enter value for n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Char %d: ", i + 1);
        scanf(" %c", &ara_original[i]);
    }

    for(i = 0; i < n; i++) {
        if((ara_original[i] == 'a' || ara_original[i] == 'e' || ara_original[i] == 'i' || ara_original[i] == 'o' || ara_original[i] == 'u') ||
           (ara_original[i] == 'A' || ara_original[i] == 'E' || ara_original[i] == 'I' || ara_original[i] == 'O' || ara_original[i] == 'U')) {
               ara_vowel[j] = ara_original[i];
               j++;
        }
        else {
               ara_consonant[k] = ara_original[i];
               k++;
        }
    }

    for(i = 0; i < j; i++) {
        printf("%c ", ara_vowel[i]);
    }

    printf("\n");

    for(i = 0; i < k; i++) {
        printf("%c ", ara_consonant[i]);
    }

    return 0;
}
