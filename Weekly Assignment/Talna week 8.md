Week 8: Inheritance – Square & Cube
Task Summary:
Design a Square class and a Cube class that inherits from Square.
1.    Class Requirements
Square (Base Class)
Data member: side
Member functions:
getPeri() → returns perimeter
getArea() → returns area
Cube (Derived Class)
Inherits from Square
No new data members
Member functions:
getArea() → returns surface area
getVolume() → returns volume
2.    Pseudocode
Copy code

BEGIN
  CLASS Square
     PROTECTED side
     CONSTRUCTOR(side)
     FUNCTION getPeri()
     FUNCTION getArea()
  END CLASS

  CLASS Cube INHERITS Square
     CONSTRUCTOR(side)
     FUNCTION getArea()
     FUNCTION getVolume()
  END CLASS

  CREATE object c
  DISPLAY perimeter, area, surface area and volume
END
3.    C++ Program
Cpp
#include <iostream>
Using namespace std;

Class Square {
Protected:
    Double side;

Public:
    Square(double s) {
        Side = s;
    }

    Double getPeri() {
        Return 4 * side;
    }

    Double getArea() {
        Return side * side;
    }
};

Class Cube : public Square {
Public:
    Cube(double s) : Square(s) {}

    // Surface Area
    Double getArea() {
        Return 6 * side * side;
    }

    Double getVolume() {
        Return side * side * side;
    }
};

Int main() {
    Cube c(5);

    Cout << “Perimeter of base square: “ << c.getPeri() << endl;
    Cout << “Area of base square: “ << Square::getArea() << endl;
    Cout << “Surface area of cube: “ << c.getArea() << endl;
    Cout << “Volume of cube: “ << c.getVolume() << endl;

    Return 0;
}

Created by talnawande-two on 2026-01-30.