#include <stdio.h>

int main() {
   
    int a;
    int b;
    
    printf("Enter the value of a : ");
     scanf("%d",&a);
     printf("Enter the value of b : ");
     scanf("%d",&b);
    
     
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of a %% b is %d\n", a % b);
    // a % b is the remainder when a is divided by b
    //% operator is called the modulus operator. It calculates the remainder when one number is divided by another.

   //other method


    float c,d;

    printf("Enter the value of c and d using comma : ");
    scanf("%f,%f",&c,&d);

    float sum = c + d;
    float sub = c - d;
    float mul = c * d;  
    float div = c / d;

    printf("Addition : %f Substraction : %f Multiplication : %f Division : %f\n",sum,sub,mul,div);

    //to round off decimal points

    printf("Addition : %.2f Substraction : %.2f Multiplication : %.2f Division : %.2f",sum,sub,mul,div);


    return 0;
}
