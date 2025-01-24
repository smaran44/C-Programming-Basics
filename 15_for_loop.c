/*
for loop
The for loop is commonly used when you know the number of iterations in advance. It consists of three parts: initialization, condition, and update.
Syntax:
for (initialization; condition; update) {
// Code to be executed repeatedly
}
*/

// For Loop:
//The for loop is best when you know in advance how many times the loop needs to execute (i.e., when the iteration count is predetermined).
//Use Case:
//When you need to iterate over a sequence or range (e.g., counting, processing arrays, etc.).

#include <stdio.h>
int main() {
    // print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    // print even numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    // print odd numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    // print numbers from 10 to 1
    for (int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}