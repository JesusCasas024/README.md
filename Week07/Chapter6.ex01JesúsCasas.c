#include <stdio.h>

int main()
  
{
  
  int x1,x2,y1,y2; /* x and y are for the coordinates of the two points.*/
  float d; /* is the distance that we are searching*/
  char line[45] 
    
    printf("what is the x1 coordinate?\n");
    printf("what is the y1 coordinate?");
     fgets(line, sizeof(line), stdin);
     sscanf(line, "%d", %x1, line, "%d", &y1, line);
  
  printf("what is the x2 coordinate?\n");
    printf("what is the y2 coordinate?");
     fgets(line, sizeof(line), stdin);
     sscanf(line, "%d", %x2, line, "%d", &y2, line);
  
  d= (x2 - x1)^2 + (y2 - y1)^2;
  
  printf("The distance is %f", d);
  
  return 0;
  
}
  
  
