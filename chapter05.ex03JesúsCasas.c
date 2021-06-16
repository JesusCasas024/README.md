#include<stdio.h>

int main()
  
{
  
  float height,width,perimeter; /* information of a rectanlge*/
  
    
    printf("what is the height  of the rectangle?");
  
  scanf("%f",&height);
  
  printf("what is the width of the rectanlge?");
  
  scanf("%f", &width);
  
  perimeter= 2*(height + width);
  
  printf("the perimeter is, %f", perimeter),
  
  return 0;
  
}
