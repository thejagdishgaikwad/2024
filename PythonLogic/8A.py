# geometry.py
import math

def square_area(x):
    return (x * x)

def circle_area(r):
    return (math.pi * r * r)

import geometry

def pointyShapeVolume(x, y, squareBase):
    if squareBase == True:
        print("Square area =", geometry.square_area(x))
    else:
        print("Circle area =", geometry.circle_area(x))

# Displaying the functions available in geometry module
print(dir(geometry))

# Testing the function
pointyShapeVolume(2, 3, True)   # Calls square_area
pointyShapeVolume(2, 4, False)  # Calls circle_area
