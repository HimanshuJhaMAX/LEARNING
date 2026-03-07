def find_max(numbers):
    max = numbers[0]
    for number in numbers:
        if number > max:
            max = number
    return max
            
            
def find_lowest(numbers):
    low = numbers[0]
    for number in numbers:
        if number < low:
            low = number
    return low