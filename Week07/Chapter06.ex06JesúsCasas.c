#include <stdio.h>

int main()

{


const int work_hours = 40;

const float overtime = 1.5;

float h,r; /*hours and rate*/
float regular,ot;/*ot is overtime to other operation*/
float p; /*p is the pay/salary*/
char line[45];


printf("type the hours worked ");
fgets(line, sizeof(line), stdin);
sscanf(line,"%f", &h);

printf ("Enter rate: ");
fgets(line,sizeof(line), stdin);
sscanf(line, "%f", &r);


if ( h <= work_hours ) {

regular = h * r;

ot = 0.0;

}

else {

regular = work_hours * r;

overtime= (h - work_hours)* r* ot;

}


p= regular + overtime;

printf("Your pay is: %f" p);

return 0;

}
