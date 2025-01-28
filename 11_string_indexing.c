/*
Strings are ordered sequences, and you can access individual characters using indexing. 
C uses zero based indexing, where the first character has an index of 0.
*/

#include <stdio.h>
int main() {

   char name[50]; // Allocate memory for up to 49 characters + '\0'
  //in [] we can specify the size of the array like [10] or [20] etc.
   // we cannot leave it empty like [] or [0]
   printf("Enter name : ");
   scanf("%s",name);//it cannot take space separated strings
   // if we enter a string with space like "Hello World" then it will only take "Hello" and leave "World"

   // we use %c to print a single character
    printf("First character of the name is : %c\n",name[0]);
    printf("Second character of the name is : %c\n",name[1]);
    printf("Third character of the name is : %c\n",name[2]);
    printf("Fourth character of the name is : %c\n",name[3]);
    printf("Fifth character of the name is : %c\n",name[4]);
    printf("Sixth character of the name is : %c\n",name[5]);
    printf("Seventh character of the name is : %c\n",name[6]);
   return 0;
}