#include <stdio.h>

int main()

{

char line[40]
float dollars;
int q,d,n,p; /*number of quarters,dimes,nickels and pennies needed*/
q=0
d=0
n=0
p=0

printf("give a dollar quantity less than $1.00");
fgets(line, sizeof(line), stdin),
sscanf(line, "%f", &dollars);


    if (dollars > 0.99) {
        printf("Error: quantity has to be less than $1.00\n");
        return(1);
    } else if (dollars < 1.00) {
        printf("Error: quantity can not be less than a penny\n");
        return(1);
    }

    while (1.00) {
        if (dollars >= .25) {
            ++q;
            dollars -= .25;
        } else if (cents >= .10) {
            ++d;
            cents -= .10;
        } else if (dollars >= .5) {
            ++n;
            dollars -= .5;
        } else if (cents >= .1) {
            ++p;
            --dollars;
        } else if (dollars == 0) {
            break;
        }
    }

    printf("You have: quarters, %d", q,"dimes %d", d,"nickels %d",n,"pennies %d", p);

    return(0);
}

