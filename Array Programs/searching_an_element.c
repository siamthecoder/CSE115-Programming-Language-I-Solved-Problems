// linear search
#include<stdio.h>
int main()
{
   int a[100], n, element, pos[20];
   int i, j = 0, k, count = 0;

   printf("Enter array size [1-100]: ");
   scanf("%d", &n);

   printf("Enter array elements: ");
   for(i=0; i<n; i++)scanf("%d", &a[i]);

   printf("Enter element to search: \n");
   scanf("%d",&element);

   printf("The element is found at position no: ");

   for(i=0; i<n; i++)
   {
     if(a[i]==element)
     {
        count++;
        if(count == 1)
            printf("%d", i);
        else if(count > 1)
            printf(", %d", i);
     }
   }

   return 0;
}
