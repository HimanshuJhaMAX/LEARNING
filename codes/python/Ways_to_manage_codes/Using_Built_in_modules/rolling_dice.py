import random


class Dice:
    def roll(self):
        dice_num1 = random.randint(1,6)
        dice_num2 = random.randint(1,6)
        return dice_num1,dice_num2


dice = Dice()
print(dice.roll())