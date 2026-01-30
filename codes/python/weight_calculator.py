weight = float(input("Enter your weight:"))
unit = input('Enter the unit of mesurement given above (Lbs or Kgs):')
if unit.lower() == 'lbs':
    converted_weight = weight * 0.45
    print(f'Your weight in kgs is: {converted_weight}')
else:
    converted_weight = weight / 0.45
    print(f'your weight in lbs is : {converted_weight}')
    