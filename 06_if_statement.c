// conditional statements are used to perform different actions based on different conditions
// there are generally four types of conditional statements
// 1. if statement
// 2. if else statement
// 3. else if statement
// 4. switch statement

#include <stdio.h>
int main() {

    // if statement
    // if statement is used to execute a block of code only if the condition is true

    //syntax:
    /* if (condition) {
    // Code to execute if condition is true
       } */



    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    if (a>b) {
        printf("a is greater than b\n");
    }
    
    /*Q:- find positive numbers*/
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if (num>0) {
        printf("the given number %d is positive\n",num);
    }

    return 0;
}