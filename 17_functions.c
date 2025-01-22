/*Function
Functions are blocks of organised, reusable code that perform a specific task
Dividing a complex problem into smaller chunks makes our program easy to understand and reuse.
Predefined Functions are already available for use through libraries, header files, and dynamic libraries.
User-Defined Functions allow programmers to write custom functions to make their programs more efficient and easier to manage.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "123456789";
    printf("Length of the string: %s\n", (str)); 
    // strlen() is a predefined function that tells length of the string
    // strlen() is defined in string.h header file
    printf("Length of the string: %d\n", strlen(str));

    return 0;
}


