numbers = [5 , 2 , 5 , 2 , 2]
for x in numbers:
    print("x" * x)

# upper part is simple way to print the pattern
# Lower part is to print the same pattern but in standard way using inner loop
print('\n\n')
for x_count in numbers:
    output = ''
    for count in range (x_count):
        output += 'x'
    print(output)