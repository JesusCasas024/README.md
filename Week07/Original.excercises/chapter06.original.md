/*A program that calculate the total price of things that you bought*/

#include <stdio.h>

int main()

{

float x,y,total;/*price of your objects and total*/
int n,m;/*number of type of object bought*/
char line[50];

printf("Enter the number of objects: ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &n);

printf("Enter the price of the object: ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%f", &x);

printf("Enter the number of second objects: ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &m);

printf("Enter the price of the objects: ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%f", &y);

total=(n*x) + (m*y);

printf("Your total payment is: %f", total);

return 0;

}

