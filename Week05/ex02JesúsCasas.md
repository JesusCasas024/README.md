#include <stdio.h>

int main()

{

int s,m,h,q; //* s is seconds, m is minutes, q is quantity of seconds and h for hours

printf("recieve a quantity of seconds and show its equivalence in format hours,:minutes,:seconds \n")

printf("which is the quantity of seconds?")

scanf("%d",&q);

h=(q/3600);

m=((q-h*3600)/60);

s=q-(h*3600+m*60);

printf("%d:%d:%d",h,m,s);

return 0;

}
