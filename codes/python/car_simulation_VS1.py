command = ""
while command != "quit":
    command =input(">  ").lower()
    if command == "start":
        print("Car has started . You are ready to go!")
    elif command == "stop":
        print ("Car has stopped.")
    elif command == "quit":
        print("Car simulation ended.")
    elif command == "help":
        print("""
              start - to start the car
              stop - to stop the car
              quit - to exit the simulation
            """)
    else:
        print("I don't understand that command.")
        