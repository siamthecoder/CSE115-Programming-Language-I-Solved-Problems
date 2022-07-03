#include <stdio.h>
#include <string.h>
int main()
{
    char st[50][75], temp[50];
    int i, j, n;

    printf("Enter how many string you want to give: ");
    scanf("%d", &n);

    printf("Enter strings: \n");

    for(i = 0; i < n; i++) {
        scanf("%s[^\n]", st[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmpi(st[i], st[j]) > 0) {
                strcpy(temp, st[j]);
                strcpy(st[j], st[i]);
                strcpy(st[i], temp);
            }
        }
    }

    printf("After sorting.\n");

    for(i = 0; i < n; i++) {
        puts(st[i]);
    }

    return 0;
}
