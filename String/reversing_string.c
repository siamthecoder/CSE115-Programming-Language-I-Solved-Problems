#include<stdio.h>
int main()
{
   char ch[50], a[50];
   int i= 0, j=0, length = 0;

   printf("Enter the string: ");
   scanf("%[^\n]",ch);

   printf("Reverse is: ");

   // finding legth of string
   // and storing it in variable i
    for(i = 0; ch[i]!='\0'; i++) {
     length++;
   }

   // copy the string
   for(i = length - 1; i >= 0; i--) {
    a[j] = ch[i];
    j++;
   }

   a[j]='\0';

   printf("%s", a);

   return 0;
}
