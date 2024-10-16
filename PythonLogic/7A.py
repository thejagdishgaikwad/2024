# Defining the Student class
class Student:
    def __init__(self, name, age, address, email):
        # Initializing the student's attributes
        self.name = name
        self.age = age
        self.address = address
        self.email = email
    
    # Method to display the student information
    def display_info(self):
        print("\nStudent Information:")
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")
        print(f"Address: {self.address}")
        print(f"Email: {self.email}")

# Getting user input for student details
print("Enter Your Details!")
name = input("Enter student's name: ")
age = input("Enter student's age: ")
address = input("Enter student address: ")
email = input("Enter student's email: ")

# Creating an object of the Student class with user input
student1 = Student(name, age, address, email)

# Displaying the student information
student1.display_info()
