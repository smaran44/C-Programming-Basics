#include<stdio.h>

void square(int n);
void _square(int* n);


int main() {
int age = 22;
int *ptr = &age;
int _age = *ptr;
printf("%d\n", _age);
//address
printf("%p\n", &age);
printf("%p\n", ptr);
printf("%p\n", &ptr);
//data
printf("%d\n", age);
printf("%d\n", *ptr);
printf("%d\n", *(&age));

int number = 4;
//call by value
square(number);
printf("n is : %d\n", number);
//call by reference
_square(&number);
printf("n is : %d\n", number);
return 0;
}
void square(int n) {
n = n * n;
printf("square is : %d\n", n);
}
void _square(int* n) {
*n = *n * *n;
printf("square is : %d\n", *n);
}


return 0;