import converters   #use this to import internal module
from converters1 import kg_to_lbs    #use this to import specific functions from module

print(converters.lbs_to_kg(155.55))
print(kg_to_lbs(70))             

# when we import internal module , we have to prefix function with objects
#Bur in case of importing specific function , we can directly use funstions