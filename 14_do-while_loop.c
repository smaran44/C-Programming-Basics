/*
do-while loop
The do-while loop is similar to the while loop, but the condition is checked after the execution of the block of code.
 This means that the block of code will always be executed at least once, even if the condition is false.
Syntax:
do {
// Code to be executed
} while (condition);
*/

//The do-while loop is similar to a while loop but guarantees that the loop body will execute at least once, as the condition is checked after executing the loop body.
//Use Case:
//When you need to execute the loop body at least once, regardless of the condition.
//Often used in menu-driven programs or input validation scenarios.

#include <stdio.h>
int main() {

    // here the major difference b/w while and do-while is in do-while block of code will always be executed at least once

    int a =1;
    do {
        printf("%d\n",a);
        a++;
    } while (a<1);

// Here in do-while loop the condition is false but the block of code is executed once


    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    // print even numbers from 1 to 10
    int j = 1;
    do {
        if (j % 2 == 0) {
            printf("%d\n", j);
        }
        j++;
    } while (j <= 10);

    // print odd numbers from 1 to 10
    int k = 1;
    do {
        if (k % 2 != 0) {
            printf("%d\n", k);
        }
        k++;
    } while (k <= 10);

    return 0;
}