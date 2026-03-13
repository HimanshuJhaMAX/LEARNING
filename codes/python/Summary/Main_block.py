import Basic_clasulations as bc


a = int(input("Enter first number: "))
b = int(input("Enter second number: "))


action = input("""What action you want to perform 
               '+' for Addition
               '-' for Subtraction 
               '*' for Multiplication
               """)


if (action == '+'):
    print(f"The addition of {a} and {b} is {bc.Addition(a,b)}")
    
elif (action == '-'):
    print(f"The subtraction of {a} with {b} is {bc.Subtraction(a,b)}")
    
elif (action == '*'):
    print(f"The multiplication of {a} and {b} is {bc.Multiplication(a,b)}")
    
else:
    print("Please Enter read the instruction properly")
    
    
    