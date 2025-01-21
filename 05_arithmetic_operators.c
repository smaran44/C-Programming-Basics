#include <stdio.h>

int main() {
   
    int a;
    int b;
    
    printf("Enter the value of a : ");
     scanf("%d",&a);
     printf("Enter the value of b : ");
     scanf("%d",&b);
    //we can also write scanf("%d,%d",&a,&b);
     
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of a %% b is %d\n", a % b);
    // a % b is the remainder when a is divided by b
    return 0;
}