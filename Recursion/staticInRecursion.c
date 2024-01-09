#include <stdio.h>

void recurse()
{
    static int count = 1;

    if(count > 5) {
        return;
    }

    printf("Count : %d\n", count);
    count++;
    recurse();
}

int main()
{
    recurse();
    return 0;
}

