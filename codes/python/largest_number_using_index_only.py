num_1 = int(input("Enter first number:"))
num_2 = int (input ("Enter second number:"))
num_3 = int (input ("Enter third number:"))
numbers = [num_1,num_2,num_3]
for largest in numbers:
    if numbers[0] >= numbers[1] and numbers[0] >= numbers[2]:
        Largest = numbers[0]
    elif numbers[1] >= numbers[0] and numbers[1] >= numbers[2]:
        Largest = numbers[1]
    else:
        Largest = numbers[2]
print(f"The largest number among them is : {Largest}")

#easy way
numbers = [num_1,num_2,num_3]
print(f"The largest number among them is : {max(numbers)}")