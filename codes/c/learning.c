#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("\nBefore swap: a = %d, b = %d\n", a, b);
    
    // Swap using temp variable
    temp = a;
    a = b;
    b = temp;
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
