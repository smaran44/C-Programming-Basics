#include <stdio.h>
int main() {
    int arr[5];
    printf("Enter the elements of the array : "); //Enter the elements of the array without commas like : 1 2 3 4 5
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Access and print each element of the array
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
        printf("Element at index %d: %d\n", i, arr[i]);
    }

 // Access and print each element of the array in reverse order
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", arr[i]);
        printf("Element at index %d: %d\n", i, arr[i]);
    }

  return 0;
}