//Program in C to display the following patterns

#include <stdio.h>
int main() {
   
   int i, j, space;
 
//PATTERN 2
// *
// *
// *
// *
printf("\n");

printf("Pattern 2: \n");
for (i = 1; i <= 4; i++) {
   for (j = 1; j <=5; j++) {
    printf("*");
   }
   printf("\n");
}


  return 0;
}
