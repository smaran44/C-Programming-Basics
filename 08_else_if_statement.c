#include <stdio.h>
int main() {

    // else if statement
    // else if statement is used to execute a block of code if the condition is true and another block of code if the condition is false
  
    //syntax:

   /* if (condition1) {
    // Code to execute if condition1 is true
 } else if (condition2) {
    // Code to execute if condition2 is true
 } else if (condition3) {
    // Code to execute if condition3 is true
 } 
 // More else if blocks can be added as needed
 else {
    // Code to execute if none of the conditions are true
 }    */




    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    if (a>b) {
        printf("a is greater than b\n");
    } else if (a<b) {
        printf("b is greater than a\n");
    } else {
        printf("a is equal to b\n");
    }

    /*Q:- find numbers are positive or negative*/

    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if (num>0) {
        printf("the given number %d is positive\n",num);
    } else if (num<0) {
        printf("the given number %d is negative\n",num);
    } else {
        printf("the given number %d is neither negative nor positive\n",num);
    }

    //we can use else if statement multiple times

    //Q:- find the smallest number
    int n1,n2,n3,n4;
    printf("Enter the value of n1,n2,n3,n4 using commas : ");
    scanf("%d,%d,%d,%d",&n1,&n2,&n3,&n4);


    if (n1==n2==n3==n4) {  //(n1=n2=n3=n4) is wrong because In C, = is used for assignment, while == is used for comparison
        printf("All numbers are equal.\n");
    } else if (n1<=n2 && n1<=n3 && n1<=n4) {
        printf("%d is the smallest number\n",n1);
    } else if (n2<=n1 && n2<=n3 && n2<=n4) {
        printf("%d is the smallest number\n",n2);
    } else if (n3<=n1 && n3<=n2 && n3<=n4) {
        printf("%d is the smallest number\n",n3);
    } else {
        printf("%d is the smallest number\n",n4);
    }

    return 0;
    
}