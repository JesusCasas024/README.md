#include <stdio.h>

int main(){
    char line_text;
    int year;

    printf("put a year: ");
    gets(line_text, sizeof(line_text), stdin);       
    sscanf(line_text, "%d", &year, line_text);
    

    if(year % 4 != 0 || (year % 100==0 && year % 400!=0)){
        printf("The year: %d", year "is not a lap year");
    }
    else {
        printf("The year: %d", year, "is a leap year");
    }
    return 0;
}
