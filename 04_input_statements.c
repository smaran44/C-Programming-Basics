#include<stdio.h>

//scanf is used to take input from the user

int main() {
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("The value of a is %d\n", a);

    // %d is a format specifier for decimal(integer)
   //& is used to store the value of a in the memory location of a

    float b;
    printf("Enter the value of b\n");  
    scanf("%f", &b);
    printf("The value of b is %f\n", b);

    // %f is used for float values

    return 0;
}