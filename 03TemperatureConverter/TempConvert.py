def FtoC(num):
    Celsius = (num - 32)*5/9
    return Celsius

def CtoF(num):
    Fahrenheit = (num*9/5) + 32
    return Fahrenheit

def main():
    num = float(input("Enter A Value: "))
    method = input("to Fahrenheit(1) or Celsius(2): ")

    if method == "1":
        result = CtoF(num)
    elif method == "2":
        result = FtoC(num)
    else:
        result = "please select only 1 or 2"

    return result

result = main()
print(result)
