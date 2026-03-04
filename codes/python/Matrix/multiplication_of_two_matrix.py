#Program to multiply two 2x2 matrix

matrix1 = []
matrix2 = []

print("Enter the elements of first matrix: ")
for i in range(2):
    row = []
    for j in range(2):
        elements = int(input(f"Enter elements of position [{i+1}][{j+1}]"))
        row.append(elements)
    matrix1.append(row)

print("Enter the elements of Second matrix: ")
for i in range(2):
    row = []
    for j in range(2):
        elements = int(input(f"Enter elements of position [{i+1}][{j+1}]"))
        row.append(elements)
    matrix2.append(row)


MATRIX = [
    [0,0],
    [0,0]
    ] 

print("\nThe value of matrix after multiplication is :")   
for X in range(2):
    for Y in range(2):
        MATRIX[X][Y] += matrix1[X][Y] * matrix2[X][Y]

for row in MATRIX:
    for element in row:
        print(element,end=" ")
    print()