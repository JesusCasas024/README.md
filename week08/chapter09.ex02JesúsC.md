#include <stdio.h>

int begins(char str1[], char str2[]) {
	int x;          /*the index*/
        x= 0;
	while (1) {
	
		if (str1[ x ] == '\0') {
			return(1);
		}

		if (str1[x] != str2[x]) {
			return(0);
		}

		++x;
	}
}

int main(void) {

	if (begins("Under", "Undone")) {
		printf("match");
	} else {
		printf("no match.");
	}

	return(0);
}
