#include<stdio.h>

int main()
  
{
  
  float h,m,mt;/* h=hours, m=minutes,mt=total of minutes.*/
  
  int x; /* number of minutes per hour*/
  
  printf("how many hours do we have?");
  
  scanf("%f", &h);

  printf("how many minutes do we have?");
    
    scanf("%f", &m);
  
  x=60
  
  mt= (h*x) +m;
  
  printf("The total of minutes are: %f", &mt);
  
  return 0;
  
}
