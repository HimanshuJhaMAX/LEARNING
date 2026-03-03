total_price =0
number_of_items = int(input("Enter the number of item you purchased in store: "))
for items in range(number_of_items):
    item_name = input("Enter the name of the item:   ")
    item_price = int(input("Enter the price of the item:   "))
    total_price += item_price
print(f"total_price={total_price}")