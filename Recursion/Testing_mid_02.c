#include <stdio.h>

void fun (int n) {

	if(n <= 0) {
		return;
	}

	printf("%d ", --n) ;
	fun(--n);
	printf("%d ", --n) ;
}

int main()
{
    int na;
    scanf("%d", &na);

    fun(4);

    return 0;
}

