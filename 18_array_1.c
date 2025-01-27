/* An array is a data structure that can hold a fixed number of elements of the same data type.
 Elements within an array are stored in contiguous memory locations, making it efficient to access and manipulate them.
You can initialize an array when declaring it by providing a list of values enclosed in curly braces.
for example int numbers[5] = {10, 20, 30, 40, 50};
*/
#include <stdio.h>
int main() {
    // declare an array of integers
    int numbers[5];

    // initialize the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // access and print the array elements
    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);

// simple method to declare and initialize an array

    int arr[5] = {6, 7, 8, 9, 10};
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);

// we can modify the elements of an array by assigning new values to them.
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);

// we can also declare and initialize a multi-dimensional array in C.
    int matrix_array[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    // multi dimensional array can be accessed in a matrix form
    printf("%d\n", matrix_array[0][0]);
    printf("%d\n", matrix_array[0][1]);
    printf("%d\n", matrix_array[0][2]);
    printf("%d\n", matrix_array[1][0]);
    printf("%d\n", matrix_array[1][1]);
    printf("%d\n", matrix_array[1][2]);
   
    
    return 0;
}