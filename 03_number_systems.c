 #include <stdio.h>

 int main() {

    /* In programming, four main number systems are commonly used. Each has a specific purpose depending on the context:

    1. Decimal (Base-10)
       The number system we use in daily life. It uses 10 digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
      Decimal: 0, 1, 2, 10, 255, 1024, etc.

    2. Binary (Base-2)
    The language of computers. It uses 2 digits: 0 and 1
    Binary: 0, 1, 10 (2 in decimal), 1010 (10 in decimal), etc.

     binary to decimal:-
    
    Binary:      1      0      1      1
    Positions:   3      2      1      0
    Powers:      2³     2²     2¹     2⁰
    Calculation: 1×8  + 0×4  + 1×2  + 1×1
            = 8   + 0    + 2    + 1
            = 11 (Decimal)

     
     decimal to binary:-

    Step 1: 11 ÷ 2 = 5 remainder 1
    Step 2: 5 ÷ 2 = 2 remainder 1
    Step 3: 2 ÷ 2 = 1 remainder 0
    Step 4: 1 ÷ 2 = 0 remainder 1
/*

   // format specifier for decimal(integer) is %d

   // there is no built in format specifier for binary


/*
   3.Octal(Base 8)
     A number system that uses 8 digits 0,1,2,3,4,5,6,7.

    Octal: 0, 1, 7, 10 (8 in decimal), 77 (63 in decimal), etc.
   
    octal to decimal conversion

    Octal:      1       2       3
    Positions:  2       1       0
    (1 × 8²) + (2 × 8¹) + (3 × 8⁰)
    = (1 × 64) + (2 × 8) + (3 × 1)
    = 64 + 16 + 3
    = 83

    decimal to octal conversion
    
    1.83÷8 =10 remainder 3

    2.10÷8 =1 remainder 2

    3.1÷8 remainder 1

Write the remainders in reverse order: 123.

*/


   // %o is format specifier for octal number
     
  
    int decimal = 83;

    // Print decimal as octal
    printf("Decimal: %d\n", decimal);
    printf("Octal: %o\n", decimal);

    return 0;


  

    
    
    // %x is used for hexadecimal values

    printf("%x\n", 15);

    int num = 255;

    printf("Hexadecimal (lowercase %%x): %x\n", num);  
    printf("Hexadecimal (uppercase %%X): %X\n", num); 

    /*Hexadecimal (or simply "hex") is a base-16 number system.
    Unlike the decimal system (base-10), which uses digits 0-9, the hexadecimal system uses 16 symbols:
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
    Here:
    0-9 represent values 0 to 9.
    A-F represent values 10 to 15.

   decimal to hexadecimal 

   Example: Convert 123 to Hexadecimal
    1. 123 ÷ 16 = 7 remainder 11 (11 = B in              hexadecimal).
    2. 7 ÷ 16 = 0 remainder 7.
    Write the remainders in reverse: 7B.

    hexadecimal to decimal 
    
   Hexadecimal:   7       B
   Positions:     1       0
   (7 × 16¹) + (B × 16⁰)
   = 112 + 11
   = 123
*/

    

    return 0;
