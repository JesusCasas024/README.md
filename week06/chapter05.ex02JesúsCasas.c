#include<stdio.h>

int main()
  
{
  
  float V,x,pi,r; /* V=volume, x to resume an operation, pi is for 3.1416, r=radius*/
  
  char line[30]

x=4/3;

pi=3.1416
  
  printf("which is the radius of the sphere?");
  
  fgets(line, sizeof(line), stdin);
  
sscanf(line, "%f", &r);

V=(x*pi)(r*r*r);

printf("Our volume is=  %f", V);

return 0;

}
