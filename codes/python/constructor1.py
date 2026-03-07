class Person:
    def __init__(self,nam):
        self.nam = nam
    
    def talk(self):
        print(f"HI! {self.nam} . Let talk")
        

a  = input("Enter your name: ")
b = input("Enter your name: ")

person1 = Person(a)
person1.talk()

person2 = Person(b)
person2.talk()