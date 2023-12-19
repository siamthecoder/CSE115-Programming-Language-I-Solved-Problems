#include <stdio.h>
int main()
{
    int max, n1, n2, lcm;

    printf("\n\tEnter two numbers here: ");
    scanf("%d%d", &n1, &n2);

    if(n1 < 0) {
        n1 = n1 * -1;
    }
    if(n2 < 0) {
        n2 = n2 * -1;
    }

    if(n1 > n2) {
        max = n1;
    }
    else {
        max = n2;
    }

    while(1) {
        if(max % n1 == 0 && max % n2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("\n\tThe LCM is: %d\n", lcm);

    return 0;
}
