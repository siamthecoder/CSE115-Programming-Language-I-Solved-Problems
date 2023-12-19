#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, D;
    float x1, x2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if(d >= 0) {
        D = sqrt(d);

        x1 = (- b + D) / (2 * a);
        x2 = (- b - D) / (2 * a);

        printf("\n\tx1 = %0.3f\tx2 = %0.3f\n", x1, x2);

    }
    else if(d < 0) {
        printf("\n\tRoot are imaginary. Thanks.\n");
    }

    return 0;

}
