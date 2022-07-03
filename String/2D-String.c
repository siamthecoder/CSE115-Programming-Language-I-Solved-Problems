#include <stdio.h>
int main()
{
    char str[10][50];
    int i, n;

    printf("Enter how many strings you want to entry: ");
    scanf("%d", &n);

    printf("Enter now: \n");

    for(i = 0; i < n; i++) {
        scanf("%s[^\n]", str[i]);
    }

    printf("\n");

    for(i = 0; i < n; i++) {
        puts(str[i]);
    }

    return 0;
}
