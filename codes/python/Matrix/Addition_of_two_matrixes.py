#Program to add two 2x2 matrix

matrix1 = []
matrix2 = []

#Input of First matrix
print("Enter the elements of First matrix: ")
for i in range(2):
    row = []
    for j in range(2):
        elements = int(input(f"Enter the elements of position [{i+1}][{j+1}]: "))
        row.append(elements)
    matrix1.append(row)

#Input of Second matrix
print("Enter the elements of Second matrix: ")
for i in range(2):
    row = []
    for j in range(2):
        elements = int(input(f"Enter the elements of position [{i+1}][{j+1}]: "))
        row.append(elements)
    matrix2.append(row)

MATRIX = [
    [0,0],
    [0,0]
]
#Adding two matrix
for i in range(2):
    for j in range(2):
        MATRIX[i][j]=matrix1[i][j]+matrix2[i][j]

#Displaying result
print ("\nThe value of matrix after addition is : ")
for row in MATRIX:
    for elements in row:
        print(elements,end=" ")
    print()