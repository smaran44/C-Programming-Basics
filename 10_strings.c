/*
A string is an array of characters.
Strings are the fundemental data type in C programming language.
They are sequences of characters enclosed in double quotes.

CREATING STRINGS
Strings in C are sequences of characters represented as arrays of characters(char arrays).
They are defined using double quotes (" ") and are terminated by a null character '\0' it indicate the end of string.
*/

#include <stdio.h>

int main() {
     //str is not defined in C programming language instead we use char array
     // [] is used to define an array
    // char is used to define a character

        char str[] = "Smaran";
    printf("Name: %s\n", str);
    return 0;
}
