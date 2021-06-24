/*This is a preeliminary specification*/
/*The next program allows the user to write a quantity of english units,
then the program will do the operations to output the result as the metric units*/
/*the program multiply the quantitys with the respective constant*/

/*For example: Miles:1, kilometers=miles by 1.6, result is: 1.6, enter the new unit.*/

/*Design code*/
/*printf("Enter quantity of miles"), fgets(line, sizeof(line),stdin), sscanf(line, %d", &miles);*/

#include <stdio.h>
 int main()

{

float mi,ga,ft,in;/*miles,gallons,feeth,inches*/
float km,m,l,cm; /*kilometers,meters,litters,centimeters*/
char line[100];

printf("Enter the number of miles:  ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%f", &mi);

printf("Enter the number of feeth:");
fgets(line,·sizeof(line),·stdin);
sscanf(line,·"%f",·ft);

printf("Enter the number of inches");
fgets(line,·sizeof(line),·stdin);
sscanf(line,·"%f",·in);

printf("Enter the number of gallons");
fgets(line,·sizeof(line),·stdin);
sscanf(line,·"%f",·ga);

km= mi*1.6;

l= ga*3.79;

m= ft* .305;

cm= in*2.54;

printf("Your metric units are: Kilometers %f" km, " meters %f" m, "centimeters %f" cm, " litters %f" l);

return 0;

}



