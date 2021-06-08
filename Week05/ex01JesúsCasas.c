#First excercise.

Cylinder.

#include <stdio.h>

int main()

{
float height,radius,area,totalarea,volume;

printf("calculate the area of a circle \n");

printf("which is the radius of the circle?");

scanf("%f",&radius);

area=(3.1416*radius*radius);

printf("calculate the volume of a cylinder \n");

printf("which is the height of the cylinder?");

scanf("%f",&height);

volume=(area*height);

printf("calculate the total area of a cylinder \n");

totalarea=(area*2 + height*(3.1416*2*radius));


printf("the totalarea is: %.3f \n", totalarea);

printf("the volume is: %.3f", volume);

return 0;

}
