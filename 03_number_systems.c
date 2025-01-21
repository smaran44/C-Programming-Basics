 #include <stdio.h>

 int main() {

    /*In programming, four main number systems are commonly used. Each has a specific purpose depending on the context:

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
*/

   // format specifier for decimal(integer) is %d

   // there is no in built format specifier for binary



    
    
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
    A-F represent values 10 to 15.*/

    

    return 0;
