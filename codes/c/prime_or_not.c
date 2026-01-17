#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n, i;
    bool isPrime = true;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Logic: Numbers <= 1 are not prime
    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        // Check for divisors from 2 up to square root of n
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break; // Exit loop if a divisor is found
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}
