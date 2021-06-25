
#include<stdio.h>

int main()

{

  int n;/*The number we want to convert*/
  int x;
  char change;
  char line[100];

   printf("Enter the value: ");
   fgets(line, sizeof(line), stdin);
   sscanf(line, "%d", n); 
   
   x=n%10
   n=n/10

    switch(n){
        case 0: 
        { printf("zero");
        break;}
        
    case 1: 
    { printf("one");
    break;}
        
     case 2: 
     { printf("two");
     break;}
        
     case 3: 
     { printf("three");
     break;}
        
     case 4: 
     { printf("four");
     break;}
        
      case 5: 
      { printf("five");
        break;}
        
      case 6: 
       { printf("six");
        break;}
        
       case 7: 
       { printf("seven");
        break;}
        
       case 8: 
       { printf("eight");
        break;}
        
        case 9: 
        { printf("nine");
        break;}

    }

    return 1;
}
