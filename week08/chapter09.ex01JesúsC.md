this is the first excersice.



 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char string[150];
        char line[60] 
  	int x, tw;/*tw is the total words*/
  	tw = 1;
 
  	printf("Enter a string: ");
  	gets(string);
  	 	   	
  	for(x = 0; string[i] != '\0'; x++)
	{
		if(string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
		{
			tw++;	
		} 
	}	
	printf("The number of Words in your string is: %s  = %d", str, tw);
	
  	return 0;
}


