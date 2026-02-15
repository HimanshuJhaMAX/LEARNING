num1 = int(input("Enter any first random numbers for the list:"))
num2 = int(input("Enter any second random numbers for the list:"))
num3 = int(input("Enter any third random numbers for the list:"))
num4 = int(input("Enter any fourth random numbers for the list:"))
num5 = int(input("Enter any fifth random numbers for the list:"))
num6 = int(input("Enter any sixth random numbers for the list:"))
num7 = int(input("Enter any seventh random numbers for the list:"))
num8 = int(input("Enter any eighth random numbers for the list:"))
num9 = int(input("Enter any ninth random numbers for the list:"))
num10 = int(input("Enter any tenth random numbers for the list:"))
random_list = [num1,num2,num3,num4,num5,num6,num7,num8,num9,num10]

#standard way to remove duplicates from a list

arranged_list = sorted(random_list)
removed_duplicates = list(set(arranged_list))
print(f"Numbers before removing duplicates: {random_list}")
print(f"Numbers after removing duplicates: {removed_duplicates}")

#another way to remove duplicates from a list using loop and if statement

unique_list=[]
for number in random_list:
    if number not in unique_list:
        unique_list.append(number)
print(f"Number after removing duplicates using loop: {unique_list}")