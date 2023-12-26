#include <stdio.h>

int main()
{
    FILE *fp;

    char filename[] = "my_file.txt";

    fp = fopen(filename, "r");

    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);

    return 0;
}


