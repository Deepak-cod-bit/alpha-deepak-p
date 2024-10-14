# Function to perform addition
def add(num1, num2):
    return num1 + num2

# Function to perform subtraction
def subtract(num1, num2):
    return num1 - num2

# Function to perform multiplication
def multiply(num1, num2):
    return num1 * num2

# Function to perform division
def divide(num1, num2):
    if num2 == 0:
        return "Error! Division by zero is not allowed."
    else:
        return num1 / num2

# Main program
print("Welcome to the Simple Calculator!")
print("Choose an operation:")
print("1. Addition (+)")
print("2. Subtraction (-)")
print("3. Multiplication (*)")
print("4. Division (/)")

# Get user input for operation
operation = input("Enter your choice (1/2/3/4): ")

# Check if the user entered a valid choice
if operation in ['1', '2', '3', '4']:
    # Get numbers from the user
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))

    
    if operation == '1':
        result = add(num1, num2)
        print(f"The result of {num1} + {num2} is: {result}")
    elif operation == '2':
        result = subtract(num1, num2)
        print(f"The result of {num1} - {num2} is: {result}")
    elif operation == '3':
        result = multiply(num1, num2)
        print(f"The result of {num1} * {num2} is: {result}")
    elif operation == '4':
        result = divide(num1, num2)
        print(f"The result of {num1} / {num2} is: {result}")
else:
    print("Invalid choice! Please enter a number between 1 and 4.")
