#include <stdio.h>

void replace(char array[]) {
 int x; /*varuable to loop for*/

 for (x = 0; x < sizeof(array); ++x) { /*a loop to repeat the process until its end*/
	if (array[x] == '-') { /*the character we are going to replace*/
	array[x] = '_';
		}
   }
}

/*This is a program to test the function above*/

int main(void) {
int x; /*variable to the array*/

  char array[] = { '-', 'j', 'z', 'X', '_', 'I', 'w' }; /*the array of characters*/
    replace(array); /*the comand to replace*/

   for (x = 0; x < sizeof(chars); ++x) {
 printf("%c\n", array[x]); /*the final impresion with the replaced character*/ 
	
}

return(0);

}
