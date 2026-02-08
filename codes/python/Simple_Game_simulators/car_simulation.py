terminate =""
while terminate != "end".lower():
    start=input("Enter 'start' to start the car:")
    if start == "start".lower():
        print('Car has started. You are ready to go!')
        stop=input("Do you want to stop the car? Enter 'stop' to stop the car:")
        if stop == "stop".lower():
            print("car has stopped.")
        else:
            print("Car is still running.")
    terminate=input("Do you want to END the simulation? Enter 'end' to terminate or any key to continue:")
     
