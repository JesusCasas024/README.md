#include <stdio.h>

#define limit_N 8 /*The maximum numbers in an array*/
/* As first step we need to input our array*/

int array[limit_N] = {               
	14, -1, 0, 8, 14, 6, -2, 21
};
/*Stablish variables to the for loop and the pointer*/
int x;                      

int *pointer;
            
/*Once is stablished all for the program init*/
/*After the for loop give a value to the pointer*/
int main() {

for (x = 0; x < limit_N; ++x) {
printf("array[%d] = %d\n", x, array[x]);
}

*pointer = &array[0];

for (x = 0; x < limit_N; ++x) {
	*pointer = 0;
	++*pointer;
	}

	
	printf("----------------\n");
	for (x = 0; x < limit_N; ++x) {
		printf("array[%d] = %d\n", x, array[x]);
	}

  return(0);
}
