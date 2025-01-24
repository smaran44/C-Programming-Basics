#include <stdio.h>
int main() {

     int arr[5];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

//Q:- Find the sum of the elements of the array
    int sum = 0;   
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Sum of the elements of the array: %d\n", sum);

    //other way to find the sum of the elements of the array
    printf("Sum of the elements of the array: %d\n", arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);

//Q:- Find the product of the elements of the array
    int mul = 1;
    for (int i = 0; i < 5; i++) {
        mul *= arr[i];
    }
    printf("Product of the elements of the array: %d\n", mul);

//Q:- Find the maximum element of the array
    int max = arr[0];

    printf("at first max is %d\n", max);
    
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
      printf("Maximum element of the array: %d\n", max);

    //other way to find the maximum element of the array
     
     if (arr[0] > arr[1] && arr[0] > arr[2] && arr[0] > arr[3] && arr[0] > arr[4]) {
        printf("Maximum element of the array: %d\n", arr[0]);
    } else if (arr[1] > arr[0] && arr[1] > arr[2] && arr[1] > arr[3] && arr[1] > arr[4]) {
        printf("Maximum element of the array: %d\n", arr[1]);
    } else if (arr[2] > arr[0] && arr[2] > arr[1] && arr[2] > arr[3] && arr[2] > arr[4]) {
        printf("Maximum element of the array: %d\n", arr[2]);
    } else if (arr[3] > arr[0] && arr[3] > arr[1] && arr[3] > arr[2] && arr[3] > arr[4]) {
        printf("Maximum element of the array: %d\n", arr[3]);
    } else {
        printf("Maximum element of the array: %d\n", arr[4]);
    }


    return 0;
}
