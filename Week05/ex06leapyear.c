
#include <stdio.h>

int main(){
    int year;

    printf("put a year: ");
    scanf("%d", &year);

    if(year % 4 != 0 || (year % 100==0 && year % 400!=0)){
        printf("its not leap");
    }
    else {
        printf("is a leap year");
    }
    return 0;
}
