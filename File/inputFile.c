#include <stdio.h>

int main()
{
    FILE *fp_in, *fp_out;

    char *input_file = "in.txt";
    char *out_file = "out.txt";

    int a, b, sum = 0;

    fp_in = fopen(input_file, "r");
    fp_out = fopen(out_file, "w");

    fscanf(fp_in, "%d", &a);
    fscanf(fp_in, "%d", &b);

    sum = a + b;

    fprintf(fp_out, "%d\n", sum);

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
