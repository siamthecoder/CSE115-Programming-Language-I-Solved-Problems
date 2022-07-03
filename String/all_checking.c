#include<stdio.h>
#include<ctype.h>
int main()
{
   char s[100];
   int i, vowel, conso, digit, space, special, word, letters;
   vowel=conso=digit=space=special=word=letters = 0;

   printf("Enter a string: ");
   gets(s);

   // conveting all uppercase into lowercase
   for(i=0; s[i]!='\0'; i++)
   s[i]=tolower(s[i]);
   for(i=0; s[i]!='\0';i++)
   {
      if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
      {
          letters++;
          if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') || (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
          vowel++;
          else conso++;
      }
      else if(s[i]==' '||s[i]=='\t'||s[i]=='\n')
      {
          word++;
      }
      else if(s[i]>='0'&&s[i]<='9') digit++;
      else special++;
   }

   space = (word + 1) - 1;

   printf("\nVowel counts = %d\n",vowel);
   printf("Consonant counts = %d\n",conso);
   printf("Digit counts = %d\n",digit);
   printf("Special character counts = %d\n",special);
   printf("Space counts = %d\n",space);
   printf("Word counts = %d\n",word+1);
   printf("Letters: %d\n", letters);

   return 0;
}
