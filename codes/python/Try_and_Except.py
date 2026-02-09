try:
    age = int(input("Enter your age:"))
    income = int (input ("Enter your Income:"))
    risk = income/age
    print(risk)
except ZeroDivisionError:
    print("Age cannot be zero")
except ValueError:
    print("Invalid Value")