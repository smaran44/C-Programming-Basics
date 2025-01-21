#include <stdio.h>

int main () {

    printf("%d\n",5+2);

    printf("123%d56789\n", 4);

    // "\n" character is used to create a new line in text files
    // %d is a format specifier

    int a = 10;
    printf("The value of a is %d\n", a);


    // here %d is used for integer values

    // %f is used for float values

    printf("%f\n",6575+2.5);

    // %s is used for string values

    printf("%s\n","6575+2.5 is a string value");

    // %c is used for character values

    /*character values refer to individual characters, 
    such as letters, digits, symbols, or any other single character
     represented in the computer's memory    */

    printf("%c\n",'A');

    return 0;
}
