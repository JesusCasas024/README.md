#include <stdio.h>
/*The function that return a maximum value*/

int max_value(int array[]) { /*to input the array*/
 int max;/*maximum value*/
 int x; /*variable to loop for*/

max = 0;

for (x = 0; x < sizeof(array); ++x) {
    if (array[x] > max) { /*find the max value*/
	max = array[x]; 
		}
	}

	return max;
}

/*a program to test*/

int main(void) {
int array[]; /*The array we want to analyze*/
char line[50];/*a line for output*/

printf("Enter an array: "); /*write your array of numbers*/
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &array);

array = { 80, 34, 11, 43, 81, 1, 27, 56 };

printf("The maximum value is: %d\n", max_value(array)); /*It shows the max value*/

return(0);

}
