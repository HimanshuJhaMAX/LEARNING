customer = {
    "name": "Himanshu Jha",
    "age": 18,
    "is_verified": True
}
print(customer["name"])
print(customer.get("birthday" , "No such data is available"))
# For adding new values
customer ["gender"] = "Male"
print(customer["gender"])