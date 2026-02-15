number = (input("Enter any numbers:\n"))
digits_mapping = {
    "0": "Zero",
    "1": "One",
    "2": "Two",
    "3": "Three",
    "4": "Four",
    "5": "Five",
    "6": "Six",
    "7": "Seven",
    "8": "Eight",
    "9": "Nine"
}
output = ""
for character in number:   
   output += digits_mapping.get(character, "!")  +  "\t"
print(output)