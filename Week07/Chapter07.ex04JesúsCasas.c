/*This is a preliminary specification*/

/*I'm writing a program that takes 8% sales tax to an amount*/
/*The program also will round the quantity to the nearest penny*/
/*So the program will ask for the values and then calculate the new value to print the total*/

/*Design*/
/*printf("What is the value of the article?", fgets(line, sizeof(line, stdin), sscanf(line,"%f",amount)*/

#include <stdio.h>

int main(void)

{

float am,t,Total; /*The amount/value, the tax we will obtain and the final total*/
constant float tx=.08;/*the constant to the operation*/
char line[45];
       
 printf("Enter the value of the article:");
 fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &am);
 
  t= am * tx;
  total= am +t;
 
printf("The total costs of your article is %f",total);

 getchar(); /*To round the value*/

 return 0;

}
