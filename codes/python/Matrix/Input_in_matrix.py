# Program to input and display a 3x3 matrix

matrix = []

print("Enter the elements of the 3x3 matrix:")

for i in range(3):
    row = []
    for j in range(3):
        value = int(input(f"Enter element at position [{i+1}][{j+1}]: "))
        row.append(value)
    matrix.append(row)

print("\nThe 3x3 matrix is:")
for row in matrix:
    for element in row:
        print(element, end=" ")
    print()