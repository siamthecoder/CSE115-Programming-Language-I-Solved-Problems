#include <stdio.h>

int main()
{
    FILE *fp_in, *fp_out, *fp_in_2, *fp_out_2;

    char *input_file = "math.txt";
    char *output_file = "avgMath.txt";

    char *input_file_2 = "ban.txt";
    char *output_file_2 = "avgBan.txt";

    fp_in = fopen(input_file, "r");
    fp_in_2 = fopen(input_file_2, "r");

    fp_out = fopen(output_file, "w");
    fp_out_2 = fopen(output_file_2, "w");

    char line[80], line_ban[80];
    int i, std, marks = 0, students = 0, sum = 0;
    int sum_ban = 0, students_ban = 0;

    for(i = 0; ; i++) {
        fgets(line, 80, fp_in);
        sscanf(line, "%d %d", &std, &marks);
        students = std;
        sum += marks;

        if(students == 5) {
            break;
        }
    }

    for(i = 0; ; i++) {
        fgets(line_ban, 80, fp_in_2);
        sscanf(line_ban, "%d %d", &std, &marks);
        students_ban = std;
        sum_ban += marks;

        if(students_ban == 5) {
            break;
        }
    }

    double avg, avg_ban;

    avg = (sum) / (5 * 1.00);//(students * 1.0);
    avg_ban = (sum_ban) / (5 * 1.00);//(students_ban * 1.0);

    fprintf(fp_out, "The avg marks of math is: %.2lf\n", avg);
    fprintf(fp_out_2, "The avg marks of bangla is: %.2lf\n", avg_ban);

    fclose(fp_in);
    fclose(fp_out);
    fclose(fp_in_2);
    fclose(fp_out_2);

    return 0;
}
