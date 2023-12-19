#include <stdio.h>
#include <math.h>
int main()
{
   int i, n, root_n;

   printf("Enter a number : ");
   scanf("%d", &n);

   root_n = sqrt(n);
   printf("\n\tThe factors : ");

   for(i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
   }
   /*for(i = 1; i <= root_n; i++) {
        if(n % i == 0) {
            printf("%d ", n / i);
        }
   }*/
   return 0;
}
