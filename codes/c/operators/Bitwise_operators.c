#include <stdio.h>

int main() {
    int a = 12, b = 10;

    printf("a = %d, b = %d\n\n", a, b);

    // Bitwise AND
    printf("Bitwise AND (a & b) = %d\n", a & b);

    // Bitwise OR
    printf("Bitwise OR (a | b) = %d\n", a | b);

    // Bitwise XOR
    printf("Bitwise XOR (a ^ b) = %d\n", a ^ b);

    // Bitwise NOT
    printf("Bitwise NOT (~a) = %d\n", ~a);

    // Left Shift
    printf("Left Shift (a << 2) = %d\n", a << 2);

    // Right Shift
    printf("Right Shift (a >> 2) = %d\n", a >> 2);

    return 0;
}