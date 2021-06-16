#include<stdio.h>

int main()
  
{
  
  int mt,m,h; /* mt=total minutes, m=minutes, h=hours.*/
  
  char sentence[30];
  
  printf("how many minutes do we have in total?");
  
  fgets(sentence, sizeof(sentence), stdin);
  
	sscanf(sentence, "%d", &mt);
  
  h=mt/60;
  
  m=mt % 60
    
  printf("Our conversion result is: %d hours, %d minutes.\n", h, m);
  
  return 0;
  
}
  
  
