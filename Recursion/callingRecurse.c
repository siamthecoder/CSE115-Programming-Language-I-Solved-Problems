#include <stdio.h>

void recurse(int count)
{
    if(count == 5) {
        return;
    }

    printf("Yahoo! I am learning recursion!\n");

    recurse(count + 1);
}

int main()
{
    recurse(1);
    return 0;
}

