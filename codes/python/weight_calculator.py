weight = input("Enter lbs for converting pound in kilo and kg for converting kg into pound: ")
if(weight.lower == "lbs"):
    lbs = int(input("Enter your weight in pound: "))
    lbs *= 0.45
    print(lbs)
elif(weight.lower == "kg"):
    kg = int(input("Enter your weight in kgs: "))
    kg /= 0.45
    print(kg)
else:
    print("Please Enter the information properly")