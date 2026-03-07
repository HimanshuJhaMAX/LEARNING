class Calculator:
    def multiply(self,number1,number2):
        return number1 * number2
    
    def add(self,number1,number2):
        return number1 + number2
    
    def sub(self,number1,number2):
        return number2 - number1
    

calculate = Calculator()
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
print(f"The addition of {a} and {b} is {calculate.add(a,b)}")
print(calculate.sub(a,b))
print(calculate.multiply(a,b))
