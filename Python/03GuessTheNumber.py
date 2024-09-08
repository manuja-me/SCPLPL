import random


def mainFunc():
    randomInteger = random.randint(1, 1000)

    while True:
        try:
            inputNum = int(input("Give me a Number between 1 and 1000 : "))
        except ValueError:
            print("Invalid input dawg! try again")
            continue

        if inputNum == randomInteger:
            print("Congratulations, you're an officially toddler.py")
            break
        elif inputNum > randomInteger:
            print("Too High")
        else:
            print("Too Low")


mainFunc()
