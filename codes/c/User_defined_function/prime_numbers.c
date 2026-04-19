#include <stdio.h>

int prime(int n) {
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;  // Moved outside the loop
}

int main() {
    int min, max, i;
    printf("Enter the minimum and maximum value: ");
    scanf("%d%d", &min, &max);
    printf("Prime numbers: ");
    for (i = min; i <= max; i++) {
        if (prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");  // Added newline for better output
    return 0;  // Moved outside the loop
}