#!/bin/python3


def calc(num1, num2, operator):
    if operator == "+":
        return num1 + num2
    elif operator == "-":
        return num1 - num2
    elif operator == "*":
        return num1 * num2
    elif operator == "/":
        if num2 == 0:
            return "division by zero error"
        else:
            return num1 / num2
    elif operator == "^":
        return num1**num2
    elif operator == "%":
        return num1 % num2
    else:
        return "invalid operator"


# Get input from the user:
try:
    num1 = float(input("Enter the first number: "))
    operator = input("Enter the operator (+, -, /, *, %, ^): ")
    num2 = float(input("Enter the second number: "))
    result = calc(num1, num2, operator)
    print("Answer:", result)
except ValueError:
    print("Invalid input. Please enter numeric values for numbers.")
