#include <stdio.h>

/*a function to find the result of factorials*/

 int f(int n) { /*f is factorial and n=number*/
  /*double variable that are related*/

  if (n == 0) {
 return(1);
     }

  return(n * f(n - 1)); /*the program make this operation to multiply with the numbers to complete the factorial*/

}

