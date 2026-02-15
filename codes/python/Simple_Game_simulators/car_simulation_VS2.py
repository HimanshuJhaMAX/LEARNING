command = ""
started = False
while command != "quit":
    command =input(">  ").lower()
    if command == "start":
        if started:
            print("Car is already started!")
        else:
            started = True
        print("Car has started . You are ready to go!")
    elif command == "stop":
        if not started:
            print("Car is already stopped!")
        else:
            started = False
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
        