#include <stdio.h>

// Variation 1: Function with no parameters, no return value (void)
void greet() {
    printf("Hello, World!\n");
}

// Variation 2: Function with parameters, no return value (void)
void printSum(int x, int y) {
    printf("Sum: %d\n", x + y);
}

// Variation 3: Function with no parameters, with return value (int)
int getNumber() {
    return 42;
}

// Variation 4: Function with parameters, with return value (int)
int add(int x, int y) {
    return x + y;
}

// Variation 5: Recursive function (factorial example)
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Variation 6: Function with array parameter (sum of array)
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Variation 7: Function returning void, modifying via pointer (pass by reference)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Call Variation 1
    greet();

    // Call Variation 2
    printSum(5, 10);

    // Call Variation 3
    int num = getNumber();
    printf("Number: %d\n", num);

    // Call Variation 4
    int result = add(3, 7);
    printf("Addition result: %d\n", result);

    // Call Variation 5
    int fact = factorial(5);
    printf("Factorial of 5: %d\n", fact);

    // Call Variation 6
    int arr[] = {1, 2, 3, 4, 5};
    int arrSum = sumArray(arr, 5);
    printf("Sum of array: %d\n", arrSum);

    // Call Variation 7
    int a = 10, b = 20;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);

    return 0;
}