#include <stdio.h>

void fun(int n){
	if(n <= 0)
		return 0 ;

	printf("%d, ", --n) ;
	fun(--n);
	printf("%d ", --n) ;
}

int main()
{
    fun(4);
    return 0;
}

