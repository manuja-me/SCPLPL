#!/bin/python3

method = input("to Fahrenheit(f) or Celsius(c): ")
num = float(input("Enter a Value: "))

if method == "f":
    Fahrenheit = (num * 9 / 5) + 32
    print(f"{Fahrenheit}")
elif method == "c":
    Celsius = (num - 32) * 5 / 9
    print(f"{Celsius}")
else:
    print("Wrong Input")
