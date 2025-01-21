 #include <stdio.h>

 int main() {
    
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
