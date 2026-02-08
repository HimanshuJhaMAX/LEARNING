secret_number = 0
i=0
while i<3:
    guess_number = int(input("Guess the number between 0 to 10:\n"))
    i+=1
    if guess_number < secret_number:
        print("Your guess is too low. Try again!")
    elif guess_number > secret_number:
        print("Your guess is too high. Try again!")
    else:
        print("Congratulations! You guessed the number correctly.")
        break
else:
    print("sorry, you've used all your attempts. The secret number was", secret_number)