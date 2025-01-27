#include <stdio.h>  // Including the standard input-output library for printing and input functionality

// Function prototype for `swap` (Call by Value)
// This function takes two integers as arguments and swaps their values locally
void swap(int a, int b);

// Function prototype for `_swap` (Call by Reference)
// This function takes pointers to two integers and swaps their values globally
void _swap(int* a, int* b);

int main() {
    int x = 3, y = 5;  // Declaring and initializing two integer variables `x` and `y`

    // Call by value: Passing the values of `x` and `y` to the `swap` function
    swap(x, y);

    // Printing the values of `x` and `y` after the call by value
    // The values of `x` and `y` will remain unchanged because the swap was performed on copies
    printf("x = %d & y = %d\n", x, y);

    // Call by reference: Passing the addresses of `x` and `y` to the `_swap` function
    _swap(&x, &y);  // `&x` and `&y` give the memory addresses of `x` and `y`

    // Printing the values of `x` and `y` after the call by reference
    // The values of `x` and `y` will be swapped because the function modified them directly via pointers
    printf("x = %d & y = %d\n", x, y);

    return 0;  // Indicating that the program executed successfully
}

// Function definition for `swap` (Call by Value)
// This function takes two integers `a` and `b` and swaps their values locally
// Changes made inside this function will NOT affect the original variables in `main`
void swap(int a, int b) {
    int temp = a;  // Storing the value of `a` in a temporary variable
    a = b;         // Assigning the value of `b` to `a`
    b = temp;      // Assigning the value of the temporary variable to `b`
    // The swap happens here, but it only affects the local copies of `a` and `b`
}

// Function definition for `_swap` (Call by Reference)
// This function takes pointers to two integers and swaps their values globally
// Changes made inside this function will affect the original variables in `main`
void _swap(int* a, int* b) {
    int temp = *a;  // Storing the value pointed to by `a` in a temporary variable
    *a = *b;        // Assigning the value pointed to by `b` to the location pointed to by `a`
    *b = temp;      // Assigning the value of the temporary variable to the location pointed to by `b`
    // The swap here modifies the actual values of `x` and `y` in `main` via pointers
}
