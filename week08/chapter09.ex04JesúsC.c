#include <stdio.h>

  int array(char characters[]) { 
  int x;  /*a variable to loop for that adds values*/
  int h; /*hash*/
  
  h=0

  for (x= 0; x < sizeof(characters); ++x) { /*loop for to adding up the values of the array*/
	h += characters[x];
	}

	return(h);
}

/*program to test*/
int main(void) {
 char array[]; /*our characters array*/
 array = { 'p', 'X', 'z', 'I' };

 printf("The hash is: %d\n", h(array));

	return(0);
}
