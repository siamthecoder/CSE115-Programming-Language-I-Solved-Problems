#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "my_file.txt";

    fp = fopen(filename, "w");

    fprintf(fp, "This is a file created by my program! \n");
    fprintf(fp, "I am so happy.\n");

    fclose(fp);

    fp = fopen(filename, "a");
    fprintf(fp, "2nd line.\n");

    return 0;
}

