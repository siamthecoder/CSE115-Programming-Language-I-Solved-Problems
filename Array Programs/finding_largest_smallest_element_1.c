#include<stdio.h>
int main()
{
   int a[100], n, i, max, min, maxPos, minPos;

   printf("Enter array size [1-100]: ");
   scanf("%d",&n);
   maxPos=minPos=0;

   //Take array elements and find min and max
   printf("Enter array elements: ");
   scanf("%d",&a[0]);
   max=min=a[0];
   for(i=1; i<n; i++)
   {
      scanf("%d",&a[i]);
      if(max<a[i])
      {
         max=a[i];
         maxPos=i;
      }
      if(min>a[i])
      {
         min=a[i];
         minPos=i;
      }
   }

   printf("Largest element is %d at %d position.\n", max,maxPos);
   printf("Smallest element is %d at %d position.", min,minPos);
   return 0;
}
