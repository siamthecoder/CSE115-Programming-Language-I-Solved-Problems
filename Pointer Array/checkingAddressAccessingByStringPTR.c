#include <stdio.h>

int main()
{
    char c1 = 'A', c2 = 'B', c3 = 'C';
    char *p1, *q1, *r1;

    r1 = &c3;
    q1 = &c2;
    p1 = &c1;

    printf("%c %c %c\n", *p1, *q1, *r1);

    return 0;
}
