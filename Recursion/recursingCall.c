#include <stdio.h>

void recurse()
{
    char *s = "Yahoo! I am learning recursion!";

    printf("%s\n", s);

    recurse();
}

int main()
{
    recurse();
    return 0;
}
