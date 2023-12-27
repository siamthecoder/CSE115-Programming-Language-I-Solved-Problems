#include <stdio.h>

int main()
{
    FILE *fp_in, *fp_out;

    char *input_file = "in.txt";
    char *output_file = "newOut.txt";

    char line[80];
    int num1, num2, sum = 0;

    fp_in = fopen(input_file, "r");
    fp_out = fopen(output_file, "w");

    fgets(line, 80, fp_in);

    sscanf(line, "%d %d", &num1, &num2);

    sum = num1 + num2;

    fprintf(fp_out, "%d\n", sum);

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
