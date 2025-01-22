#include <stdio.h>
int main() {

printf("Hello");
printf("Hello\n"); // \n is used to create a new line
printf("Hello\nWorld\n"); 

// \t is used to create a tab space (8 spaces)
printf("Hello\tWorld\n");

// \b is used to move the cursor one character back
printf("Hello\bWorld\n");

// \r is used to move the cursor to the beginning of the line
printf("Hello\rWorld\n");

// \(special symbols) is used to print that special symbol
printf("Hello\\World\n");
printf("Hello\"World\n");
printf("Hello\}World\n");
printf("Hello\)World\n");

return 0;
}