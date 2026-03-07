class Mammal:
    def walk(self):
        print("Walk")
        

class Dog(Mammal):
    def brak(self):
        print("Dog's barks")


class Cat(Mammal):
    def mew(self):
        print("Cats are annoying")


dog = Dog()
dog.walk()              #calling inherited method
dog.brak()              #calling Dog method

cat = Cat()
cat.walk()
cat.mew()