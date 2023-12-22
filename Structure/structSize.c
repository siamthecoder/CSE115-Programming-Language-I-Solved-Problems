#include <stdio.h>

struct s1 {
    int n;
    double d;
    char c;
};

struct s2 {
    char c1;
    int n;
    char c2;
    double d;
    char c3;
    char c4;
};

int main()
{
    printf("Size of s1: %lu\n", sizeof(struct s1));
    printf("Size of s2: %lu\n", sizeof(struct s2));

    return 0;
}
