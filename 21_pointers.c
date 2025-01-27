#include<stdio.h>  // Including the standard input-output library

int main() {
    int age = 22; // Declaring an integer variable 'age' and initializing it with the value 22
    int *ptr = &age; // Declaring a pointer 'ptr' that stores the address of the variable 'age'
    int _age = *ptr; // Dereferencing the pointer 'ptr' to get the value stored at the address and storing it in '_age'

    // Printing the value of '_age', which is obtained from dereferencing the pointer
    printf("%d\n", _age);

    // Printing the memory address of the variable 'age'
    // %p is the format specifier used to print memory addresses
    printf("%p\n", &age); 
    
    // Printing the memory address stored in the pointer 'ptr' (should be the same as &age)
    printf("%p\n", ptr);
    
    // Printing the memory address of the pointer 'ptr' itself
    printf("%p\n", &ptr);
    
    // Printing the value of the variable 'age' directly
    printf("%d\n", age);
    
    // Printing the value stored at the memory address stored in the pointer 'ptr' (dereferencing the pointer)
    printf("%d\n", *ptr);
    
    // Printing the value of 'age' by dereferencing its address directly
    // *(&age) means "get the value stored at the address of 'age'" (equivalent to 'age')
    printf("%d\n", *(&age)); 

    return 0; // Indicating that the program executed successfully
}
