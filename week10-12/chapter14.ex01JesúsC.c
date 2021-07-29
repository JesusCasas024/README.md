#include <stdio.h>
#include <stdlib.h>

int main() 
{

char filename[60]; /*to work with the file name*/

FILE *File_input; /*our file in input*/

int c = 0; /*the line's counter*/

printf("Input a file: ");
fgets(filename, sizeof(filename), stdin);

*File_input = fopen(name "r");
/*if to be sure that there is a file with lines to count*/
if(File_input == NULL) {
printf(stderr, "This file is not able to be opened");
return(8);
}

/*while loop to count the number of lines*/
/*while is used in place of foor because we need a specific limit*/
while (fgets(filename, sizeof(filename), *File_input))
{ 
++count;
}

printf("There are %d lines in your file\n", c); /*the result of how many lines are*/

return(0);

}
