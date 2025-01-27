#include<stdio.h>  // Including the standard input-output library for input and output functions

int main() {
    int aadhar[5];  // Declaring an integer array `aadhar` of size 5 to store 5 integers

    // Declaring a pointer `ptr` and initializing it to point to the first element of the array
    int *ptr = &aadhar[0];  // `&aadhar[0]` is the address of the first element of the array

    // Input loop to get values for the `aadhar` array
    for (int i = 0; i < 5; i++) {  // Loop runs 5 times (from index 0 to 4)
        printf("%d index: ", i);  // Prompt the user to input a value for the current index
        scanf("%d", &aadhar[i]);  // Use `scanf` to take input and store it at `aadhar[i]`
        // `&aadhar[i]` is the address of the ith element where the input value is stored
    }

    // Output loop to display the values of the `aadhar` array
    for (int i = 0; i < 5; i++) {  // Loop runs 5 times (from index 0 to 4)
        printf("%d index = %d\n", i, aadhar[i]);  // Print the index and its corresponding value
        // `aadhar[i]` accesses the value stored at the ith index of the array
    }

    return 0;  // Indicating that the program executed successfully
}
