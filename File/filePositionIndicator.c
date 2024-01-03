#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("line.txt", "r");

    // checking the file open operation worked or no
    if(fp == NULL) {
        perror("File opening failed\n");
        return EXIT_FAILURE;
    }

    int ch;

    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fseek(fp, sizeof(char) * 5, SEEK_CUR);

    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fclose(fp);

    return 0;
}
