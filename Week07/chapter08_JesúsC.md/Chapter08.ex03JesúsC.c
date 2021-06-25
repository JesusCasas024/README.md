
#include<stdio.h>

int main()
{
  int x,y,sum,ns;/*y=the number of numbers that we want,ns = the numbers*/
  float Av;/*The average*/
  char line[50];

  sum= 0

  printf("What quantity of numbers are?: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", %y);

  printf("Enter each element: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &ns),

  for(x=0;x<y;++x)
   {
     
   sum =sum +ns;
   }

  Av = sum/y;

  printf("The sum of the %d Numbers = %d",y, sum);
  printf("The average of the %d Numbers = %.2f",y, Av);

  return 0;
}
