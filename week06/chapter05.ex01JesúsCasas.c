#include<stdio.h>

int main()
  
{
  
  float F,C,x; /* F=degrees in farenheit, C for degrees in centigrades and x is to resume an operation*/
  
  x=9.0/5.0;
    
  printf("what is the temperature in centigrades?");
  
  scanf("%f",&C);
 
    F=(x*C)+32.0;
    
    printf("%f",&F);
  
  return 0;
  
}
  
  
  
  
  
