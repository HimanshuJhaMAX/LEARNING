#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result1, result2, result3;

    // Operator Precedence example
    result1 = a + b * c;      // * has higher precedence than +
    printf("Result of a + b * c = %d\n", result1);

    // Using parentheses to change precedence
    result2 = (a + b) * c;
    printf("Result of (a + b) * c = %d\n", result2);

    // Operator Associativity example
    result3 = a - b - c;      // - is left associative
    printf("Result of a - b - c = %d\n", result3);

    return 0;
}