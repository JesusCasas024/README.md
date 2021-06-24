/*This is a prelementary specification*/
/*I Write a program that allow us to enter a number and know if the number is 
prime or not*/
/*To reach it the program need to ask for a number and do respective operation as division by 2, depending on the result
the program will print if it is or nor a prime number.*/
/*For example: Enter a number:, number is: 3, operation 3/2, result != 0, print is prime number./*

/*Design*/
/*printf("Enter a number: "); fgets(line, sizeof(line), stdin); sscan(line, "%d", &number); R=n/2; if(R=0) printf("is not a prime number");
else printf("is prime");*/

#include <stdio.h>

int main()

{

int n; /*Is the number that is entered*/
constant int x;/*to divide the number*/
float R;/*The result*/
char line[60];

x=2

printf("Enter the number to analyze: ");
fgets(line, sizeof(line), stdin);
sscan(line, "%d", &n line);

R=n/2

else if(R!=0) {
Printf("Your number %d" n "is a prime number")
}
else if(R=0){
printf("Your number %d" n "is not a prime");
}

return 0;

}
