#include <stdio.h>
/*First stablish the files to make it easier*/
const char *File1 = "File_1.txt";
const char *File2 = "File_2.txt";
const char *File3 = "File_3.txt"; /*This file has the condition divided by 3*/

int main()
 {

FILE *File1_input;           
FILE *File2_output1;          
FILE *File3_output2;     
char line[50];  /*Just a line to the files*/
int x;        /* Numeric to the files */

/*The first functions if to the 3 files to show errors*/
File1_input = fopen(File1, "r");
  if (File1_input == NULL) {
   fprintf(stderr, "File %s is not able to be opened\n", File1);
   return(8);
}
File2_output1 = fopen(File2, "w+");
if (outfile == NULL) {
  fprintf(stderr,"File to write is not able \n", File2);
  fclose(File2_output1);
  return(8);
}
File3_output2 = fopen(File3, "w+");
if (File3_output2 == NULL) {
 fprintf(stderr, "File not able to be written\n", File3);
 fclose(infile);
 fclose(outfile);
  return(8);
  }
/*Function while used for the outputfile with if-else to separete both with each condition*/
while (fgets(line, sizeof(line), File1_input)) {
sscanf(line, "%d", &x);
if ((number % 3) == 0) { /*The first condition to have the divisible by 3 file*/
fprintf(out3file, "%d\n", x);
}
 
else {
fprintf(outfile, "%d\n", x);/*The condition where is not divisible by 3 to the second file output*/
}
} /*End of function while*/

/*Finish closing the files*/

fclose(File1_input);
fclose(File2_output1);
fclose(File3_output2);

return(0);

}
