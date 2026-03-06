class Calculator:
    def multiply(self,number1,number2):
        return number1 * number2
    
    def add(self,number1,number2):
        return number1 + number2
    
    def sub(self,number1,number2):
        return number2 - number1
    

calculate = Calculator()
a = int(input("Enter num"))
b = int(input("Enter num"))
print(calculate.add(a,b))
print(calculate.sub(a,b))
print(calculate.multiply(a,b))