#include <stdio.h>st
#include <string.h>

struct mailing {
   char name[50];/*user name*/
   char city[60]; /*the city*/
   char state[20]; /*state*/
   int streetn;/*number of street*/
   char streett[60]; /*letter of street*/
   int postal;  /*postal code*/
   int house;/*house number*/
};

void list(struct mailing *n);

int main(void) {

struct mailing lists[40];/*program allows 40 mailing lists*/
/*a list example*/
strcpy(list[0].name, "Russel lizama");
strcpy(list[0].city, "Mérida");
strcpy(list[0].state, "Yucatán");
list[0].streetn = 11;
strcpy(list[0].streett, "A");
list[0].postal = 32205; 
list[0].house = 89;

printf(lists);

return(0)

}
/*how works the program*/

void list(struct mailing *n) { /*n is the list*/

int x; /*variable x to count loops*/
/*prints of data in the program*/
printf("The mailing list");

for (x = 0; x < sizeof(n); ++x) {
 if (strlen(n[x].name) == 0) {
   continue;
}

printf("%s\n", n[x].name);
printf("%s %s\n", n[x].city, n[x].state);
printf("%d, %s,  %d, %d\n", n[x].streetn, n[x].streett, n[x].postal, n[x].house);
  }

}
