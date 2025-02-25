#include <stdio.h>

int main() {
    int a = 5, b = 3, c, d, result;
    
    // Bitwise AND (&)
    result = a & b; // Performs bitwise AND on each bit
    printf("%d & %d = %d\n", a, b, result); // 00000001 (1 in decimal)

    // Bitwise OR (|)
    result = a | b; // Performs bitwise OR on each bit
    printf("%d | %d = %d\n", a, b, result); // 00000111 (7 in decimal)

    // Bitwise XOR (^)
    result = a ^ b; // Performs bitwise XOR (exclusive OR) on each bit
    printf("%d ^ %d = %d\n", a, b, result); // 00000110 (6 in decimal)

    // Bitwise NOT (~) (Unary Operator)
    result = ~a; // Inverts all bits (2's complement representation for negatives)
    printf("~%d = %d\n", a, result); // Result is -(a+1), depends on system's bit-width
    /*The Bitwise NOT (~) operator inverts each bit of the number. It works as follows:
    It flips all bits in the binary representation of the number.
    In two’s complement representation (which is how integers are stored in C), the bitwise NOT operation is equivalent to -(number + 1).
    Example with a = 5
    Binary representation of 5 (in an 8-bit system):
    00000101
    Applying ~5:
    11111010 (all bits inverted)
    This is the two’s complement representation of -6.
    Hence, ~5 = -6.
    Example with c
    If c = 3 (binary: 00000011), applying ~c results in:
    11111100, which is -4 in two’s complement.
    Why -(number + 1)?
    In two's complement, negation is performed by inverting the bits and adding 1. Since ~ inverts the bits but does not add 1, the result is equivalent to -(number + 1).
    Thus, ~x = - (x + 1), which is why:
    ~5 = -6
    ~3 = -4*/

    // Left Shift (<<)
    result = a << 1; // Shifts bits left by 1 position (multiplies by 2)
    printf("%d << 1 = %d\n", a, result); // 00001010 (10 in decimal)

    // Right Shift (>>)
    result = a >> 1; // Shifts bits right by 1 position (divides by 2)
    printf("%d >> 1 = %d\n", a, result); // 00000010 (2 in decimal)

    // Taking input for c and d
    printf("Enter two integers c and d: ");
    scanf("%d %d", &c, &d);
    
    // Bitwise AND (&)
    result = c & d;
    printf("%d & %d = %d\n", c, d, result);

    // Bitwise OR (|)
    result = c | d;
    printf("%d | %d = %d\n", c, d, result);

    // Bitwise XOR (^)
    result = c ^ d;
    printf("%d ^ %d = %d\n", c, d, result);

    // Bitwise NOT (~)
    result = ~c;
    printf("~%d = %d\n", c, result);

    // Left Shift (<<)
    result = c << 1;
    printf("%d << 1 = %d\n", c, result);

    // Right Shift (>>)
    result = c >> 1;
    printf("%d >> 1 = %d\n", c, result);

    return 0;
}
