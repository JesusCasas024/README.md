      
#include <stdio.h>
int main() 
           
           {           
             
int x;   /*the grade of the student*/   
char grade,m;   /* letter that represents the grade and m=modifier (+,blank,-)*/        
char line[40];        

    printf("What is the grade?");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &x);

    m= ' ';   /* default no modifier  */

    if(x<6); {
      printf("The grade is F")
        
         else if (x >= 61) & (x<=63) {
        m= '-';   
        grade = 'D';
        if (percent_right >= 68)&(x<=7) {
            modifier = '+';
        } else if (x >= 64) & (x <=67 {
            grade = 'D';
        }
                               
        else if(x >= 71) & (x <= 73){
          m = '-'
          grade = 'C'
            if(x >= 78) & (x <=80){
              m = '+'; }
          else if(74<= x <=77) {
            grade= 'C';
          }
           else if(x >= 81) & (x <= 83){
          m = '-'
          grade = 'B'
            if(x >= 88) & (x <=90){
              m = '+'; }
          else if(84<= x <=87) {
            grade= 'B';
          }
              else if(x >= 91) & (x <= 93){
          m = '-'
          grade = 'A'
            if(x >= 98) & (x <=100){
              m = '+'; }
          else if(94<= x <=97) {
            grade= 'A';
        }
    
    }

    printf("The grade is %c%c\n", grade, m);

    return(0);
}
