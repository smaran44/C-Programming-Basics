#include <stdio.h>  // Including the standard input-output library for printing and input functionality

// Function prototype for `square`, which takes an integer argument by value
void square(int n);

// Function prototype for `_square`, which takes a pointer to an integer (call by reference)
void _square(int* n);  // `int* n` is a pointer to an integer

int main() {
    int number = 4;  // Declaring an integer variable `number` and initializing it with 4

    // Call by value: Passing the value of `number` to the `square` function
    square(number);
    // After the call, the value of `number` in the main function remains unchanged
    printf("n is : %d\n", number);  // Printing the value of `number` after the call by value

    // Call by reference: Passing the address of `number` to the `_square` function
    _square(&number);  // `&number` gives the memory address of the variable `number`
    // After the call, the value of `number` is updated in the main function because we used call by reference
    printf("n is : %d\n", number);  // Printing the value of `number` after the call by reference

    return 0;  // Indicating that the program executed successfully
}

// Function definition for `square` (Call by value)
// This function takes an integer argument `n` and calculates its square
// However, this does not affect the original value of the variable passed in `main`
void square(int n) {
    n = n * n;  // Calculating the square of `n`
    printf("square is : %d\n", n);  // Printing the square of `n`
}

// Function definition for `_square` (Call by reference)
// This function takes a pointer to an integer, modifies the original value of the variable
void _square(int* n) {
    *n = *n * *n;  // Dereferencing the pointer `n` to access the value and updating it to its square
    printf("square is : %d\n", *n);  // Printing the updated square value
}
