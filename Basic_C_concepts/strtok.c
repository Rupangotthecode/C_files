#include<stdio.h>
#include <string.h>

int main() {
   char string[50] = "Hello! We are learning about strtok";
   // Extract the first token
   char * token = strtok(string, " ");
   // loop through the string to extract all other tokens
   while( token != NULL ) {  //null pointer means there are no blank spaces left in the given string.
      printf( " %s\n", token ); //printing each token
      token = strtok(NULL, " ");// null as the first argument of strtok function means a reference to the previously passed string, here, 'string'.
   }
   return 0;
}
