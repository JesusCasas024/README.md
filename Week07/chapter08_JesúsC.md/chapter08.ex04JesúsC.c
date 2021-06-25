/*Preliminary specification*/
/*This will be a program that works with a for loop with a limit to 
print its mutiplication table to make easier obtain it*/
/*For example: Number = 4.... printed: 5*1=5,5*2=10,5*3=15 etc.*/

/*Design*/
printf("Enter a number to search its table"); fgets(line,sizeof(line),stdin);
sscanf(line, "&d", &n); /*For loop and print the results.*/




#include <stdio.h>

int main()
{
   int x, n;/*n is the number that user introduce*/
   char line[45];

   printf("Enter number to print table: "); /*Enter the number to search its table*/
   fgets(line, sizeof(line), stdin);
   sscanf(line, "&d", &n);

   for(x=1; x<=10; x++)
  {
   printf("%d * %d = %d\n", n, x, (n*x));
  }

  return 0;
}
