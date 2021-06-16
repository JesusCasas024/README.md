#include<stdio.h>

int main()
 
{
  
  float kmh,mih; /*kmh are kilometers per hour, mih are miles per hour.*/

  char sentence[40];
  
  printf("what are the kilometers per hour?");
  
  fgets(sentence, sizeof(sentence),stdin);
  
  sscanf(sentence, "%f", &kmh);
  
  mih= kmh*0.6213712;
  
  printf("Our miles per hour are, %f", mih);
  
  return 0;
  
}
