# Creating a dictionary
student = {
    "name": "Rahul",
    "roll_no": 12,
    "age": 18,
    "course": "BSc CSIT"
}

# Printing the whole dictionary
print("Student Details:", student)

# Accessing values using keys
print("Name:", student["name"])
print("Roll Number:", student["roll_no"])

# Adding a new key-value pair
student["grade"] = "A"

# Updating an existing value
student["age"] = 19

# Removing a key-value pair
del student["course"]

# Printing updated dictionary
print("Updated Student Details:", student)