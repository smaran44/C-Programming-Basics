#include<stdio.h>  // Including the standard input-output library for printing functionality

// Function declaration (also called a prototype)
// This tells the compiler that a function named `printHello` exists and takes no arguments
// It also specifies that the function has a `void` return type (does not return any value)
void printHello();

int main() {
    // Function call
    // This invokes the `printHello` function, transferring control to the function definition
    printHello();

    return 0;  // Indicating that the program executed successfully
}

// Function definition
// This defines what the `printHello` function does when it is called
void printHello() {
    // Printing "Hello!" followed by a newline character `\n` to move to the next line
    printf("Hello!\n");
}
