#include <stdio.h>

int main()
{
   char c;/*a letter to operation*/
   char line[30];


   printf("Enter a character: ");
   fgets(line, sizeof(line), stdin);
   sscanf(line, "%c", &c);


   
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || 
   c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
   {
   printf("The character "%c" is a vowel.", c);
   }
   else if((c >= 'a' && c<='z') || (c >= 'A' && c <= 'Z'))
   {
   
   printf("The character "%c" is Consonant.", c);
   }
   else 
   {
   printf("Character "%c" is not from alphabet.", c);/*is not from the alphabet*/
   }

   return 0;
}
