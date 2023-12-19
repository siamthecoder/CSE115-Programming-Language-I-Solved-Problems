 #include <stdio.h>
 int main()
 {
     char ch;
     int num1,num2;

     printf("Enter two numbers: ");
     scanf("%d %d",&num1,&num2);

     printf("\n\tChoose the operator(+,-,*,/,%%): ");
     scanf("%c",&ch);
     scanf("%c",&ch);

     switch(ch)
     {
       case '+':
         printf("%d + %d = %d\n",num1,num2,num1+num2);
         break;
       case '-':
         printf("%d - %d = %d\n",num1,num2,num1-num2);
         break;
       case '*':
         printf("%d * %d = %d\n",num1,num2,num1*num2);
         break;
       case '/':
         printf("%d / %d = %d\n",num1,num2,num1/num2);
         break;
       case '%':
         printf("%d %% %d = %d\n",num1,num2,num1%num2);
         break;
       default:
         printf("Error! Invalid Operator.");
     }

     return 0;
 }
