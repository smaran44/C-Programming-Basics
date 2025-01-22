#include <stdio.h>
int main() {
    // break statement
    // break statement is used to exit from a loop
    // it is used to terminate the loop immediately
    // it is used in for, while, and do-while loops
    // syntax:
    /* for (initialization; condition; update) {
        if (condition) {
            break;
        }
    } */
    // example:
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d\n", i);
    }

    // continue statement
    // continue statement is used to skip the current block, and return to the loop statement
    // it is used in for, while, and do-while loops
    // syntax:
    /* for (initialization; condition; update) {
        if (condition) {
            continue;
        }
    } */
    // example:
    for (int j = 1; j <= 10; j++) {
        if (j == 5) {
            continue;
        }
        printf("%d\n", j);
    }

    return 0;
}