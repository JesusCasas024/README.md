#include <stdio.h>
#include <string.h>


int main() {
/*First a function with the stablished variables*/
/*Finding  characters with a function to ignore the white spaces*/
/*Is the function*/
char *white(char *str) {
/*str is string*/ 
     do(++str)

     while ((str[0] == ' ')&(str[0] == '\t')) {
               
     }

     return str;
}

char line_A[160]; /*line for inputs and used in prints*/

printf("Write the string: ");
fgets(line, sizeof(line), stdin);

printf("Here are the results: %s", white(line));

return(0);
}
