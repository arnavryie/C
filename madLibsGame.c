#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
// Mad Libs Game

char noun[50] = "";
char verb[50] = "";
char adjective1[50] = "";
char adjective2[50] = "";
char adjective3[50] = "";

printf("Enter an adjective (description):\n");
fgets(adjective1, sizeof(adjective1), stdin );
printf("Enter a noun (a person, place, or thing):\n");
fgets(noun, sizeof(noun), stdin );
printf("Enter an adjective (description):\n");
fgets(adjective2, sizeof(adjective2), stdin );
printf("Enter a verb (ending w/ -ing):\n");
fgets(verb, sizeof(verb), stdin );
printf("Enter another adjective: (description) \n");
fgets(adjective3, sizeof(adjective3), stdin );


printf("%s\n, noun");   
printf("%s\n, verb");   
printf("%s\n, adjective1");   
printf("%s\n, adjective2");   
printf("%s\n, adjective3");   


    return 0;
}