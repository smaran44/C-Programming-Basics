/* Loops are used to execute a block of code repeatedly as long as a certain condition is true 
or for a specific number of interactions.
There are three types of loops in C++:
1. for loop
2. while loop
3. do-while loop
*/

/*While loop
The while loop executes a block of code as long as a specified condition is true. It continuously checks the condition before each iteration and stops when the condition becomes false.
Syntax:
while (condition) {
}
*/

#include <stdio.h>
int main() {
    int chocolates = 5;
    while (chocolates > 0) {
        printf("given 1 chocolate from %d chocolates\n", chocolates);
        chocolates--;
    }

//Q:- print numbers from 1 to 10
    int j = 1;
    while (j <= 10) {
        printf("%d\n", j);
        j++;
    }

//Q:- print numbers from 10 to 1
    int k = 10;
    while (k >= 1) {
        printf("%d\n", k);
        k--;
    }
//Q:- print even numbers from 1 to 10
    int l = 1;
    while (l <= 10) {
        if (l % 2 == 0) {  // we cannot use = instead of == in if statement because = is used for assignment, while == is used for comparison
                           // % is used to find the remainder when l is divided by 2
            printf("%d\n", l);
        }
        l++;
    }

//Q:- print odd numbers from 1 to 10
    int m = 1;
    while (m <= 10) {
        if (m % 2 != 0) {  // != is not equal to
            printf("%d\n", m);
        }
        m++;
    }
    return 0;
}


