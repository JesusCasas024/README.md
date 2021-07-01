#include <stdio.h>

int count(int n, int array[], int l) /*n is number and l lenght*/ {

if (length == 0) {
return 0;
 }

if (array[l - 1] == n) { /*there is an increment if find a match*/
return(1 + count(n, array, l - 1));
} else {
return(count(n, array, l - 1));
 }
}

/*program to test*/
int main(void)	int R; /*result*/

	int n1[]; /*a list of numbers*/
        n1[] = { 13, 15, 67, 13, 9, 36, 15, 13, 12, 13 };
	printf("appears 4 times);
	R = count(13, n1, sizeof(n1));
	printf("We had: %d", R);

	int n2[];
        n2[] = { 24, 38, 52, 24, 21, 24, 38, 31, 45, 24, 24, 41, 23, 47, 24, 36, 56 };
	printf("Appears 6 times");
	R = count(24, n2, sizeof(n2));
	printf("We had: %d", R);

	return(0);
}
