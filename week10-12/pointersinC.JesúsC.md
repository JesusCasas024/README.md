#include <stdio.h>
/*The program of hackerrank*/
void update(int *a,int *b) {
    // Complete this function    
    int temp= *a;
    
    // add the value of b to a and get the difference//
    *a += *b;
    *b= abs(temp-*b); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
