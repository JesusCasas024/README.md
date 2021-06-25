#include <stdio.h>

int main()

{

float r[10] Total;/*r=resistors*/
char line[50];
 
for(r<=0, r++);
  printf("enter the r[0]: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &r[0]);
  
  printf("enter the r[1]: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &r[1]);
  break;


 Total = 1/((1/r[0])+(1/r[1]));

 printf("The total resistance is %f", total);

 return 0;

}
