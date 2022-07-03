#include <stdio.h>
#include <string.h>
int main()
{
    char str[100][500], search[500];
    int i, n, count = 0;

    printf("Enter how many strings you want to entry: ");
    scanf("%d", &n);

    printf("Enter now: \n");

    for(i = 0; i < n; i++) {
        scanf("%s[^\n]", str[i]);
    }

    printf("\n");

    printf("Enter your searching string: ");
    scanf("%s[^\n]", search);

    for(i = 0; i < n; i++) {
        if(strcasecmp(search, str[i]) == 0) {
            count++;
            printf("Found in row: %d\n", i + 1);
        }
    }

    if(count == 0) {
        printf("Not found\n");
    }

    return 0;
}

