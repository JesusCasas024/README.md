#include <stdio.h>

int main()
{

const char *File_input = "file_1.pl";  /*our files to copy*/
const char *File_output = "file_2.pl"; /*the file to be written*/

/*Pointers*/
FILE *File1;     
FILE *File2;     
/*variable to store characters*/
int copy;             
/*Opening files to analyze if can be used*/
File1 = fopen(File_input, "r");
if (File1 == NULL) {
	fprintf(stderr, "The file %s is not able to be opened \n", File_input);
	return(8);
}
File2 = fopen(File_output, "w+");
if (File2 == NULL) {
	fprintf(stderr, "The file %s is not able to be copied\n", File_output);
	return(8);
}
/*start the loops for copy files*/
while (1) {

  copy = fgetc(File1);


  if (copy == EOF) { 
break; /*stop the first function*/
}

/*outputs for tab spaces*/
if (c == '\t') {
fputc(' ', File2);
fputc(' ', File2);
fputc(' ', File2);
fputc(' ', File2);
fputc(' ', File2);
fputc(' ', File2);
}
 
else {
fputc(copy, File2); 
	}
}

/*Copy finished*/
fclose(File1);
fclose(File2);

return(0);

}
