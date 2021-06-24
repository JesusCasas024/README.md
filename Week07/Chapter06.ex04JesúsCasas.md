#include <stdio.h>

int main()

{

char line[40]
float dollars;
int q,d,n,p; /*number of quarters,dimes,nickels and pennies needed*/

printf("give a dollar quantity less than $1.00");
fgets(line, sizeof(line), stdin),
sscanf(line, "%f", &dollars);

if(0.00<=dollars<=1.00)

while(dollars >0.00) {


