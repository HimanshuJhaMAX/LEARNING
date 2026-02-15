def check_prime_or_composite(num):
    """Check whether a number is prime or composite."""
    if num < 2:
        return "Neither prime nor composite"

    if num == 2:
        return "Prime"

    if num % 2 == 0:
        return "Composite"

    for i in range(3, int(num ** 0.5) + 1, 2):
        if num % i == 0:
            return "Composite"

    return "Prime"


# Get user input
number = int(input("Enter a number: "))
result = check_prime_or_composite(number)
print(f"{number} is {result}")

