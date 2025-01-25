#include <stdio.h>
int main() {

    // if else statement
    // if else statement is used to execute a block of code if the condition is true and another block of code if the condition is false

  //syntax:
  /*if (condition) {
    // Code to execute if condition is true
 } else {
    // Code to execute if condition is false
 } */

    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    if (a>b) {
        printf("a is greater than b\n");
    } else {
        printf("b is greater than a\n");
    }

    /*Q:- find positive numbers*/
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if (num>0) {
        printf("the given number %d is positive\n",num);
    } else {
        printf("the given number %d is not positive\n",num);
    }


 //Q:- find positive and even numbers
 //&& is logical AND operator
    if (num > 0 && num % 2 == 0) {
        printf("The number is positive and even.\n");
    } else {
        printf("The number is not both positive and even.\n");
    }

//Q:- find negative and odd numbers
//|| is logical OR operator
  
    if (num < 0 || num % 2 != 0) {
        printf("The number is either negative or odd.\n");
    } else {
        printf("The number is neither negative nor odd.\n");
    }
    return 0;
}