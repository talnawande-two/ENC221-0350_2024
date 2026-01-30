Week 7: Classes & Objects
Define a class named Employee with the following data members and functions:
Data members:
Name, age, serviceYear, salary
Member functions:
getName(), getAge(), getServiceYear(), getSalary()
Include parameterized constructor and destructor
1. Class Design 
Member
Type
Name
String
Age
Int
serviceYear
int
salary
double
2. Pseudocode

BEGIN
  CLASS Employee
     PRIVATE name, age, serviceYear, salary

     CONSTRUCTOR(name, age, serviceYear, salary)
     DESTRUCTOR()

     FUNCTION getName()
     FUNCTION getAge()
     FUNCTION getServiceYear()
     FUNCTION getSalary()
  END CLASS

  CREATE object emp
  DISPLAY emp details
END
3. C++ Program

#include <iostream>
#include <string>
Using namespace std;

Class Employee {
Private:
    String name;
    Int age;
    Int serviceYear;
    Double salary;

Public:
    // Parameterized Constructor
    Employee(string n, int a, int s, double sal) {
        Name = n;
        Age = a;
        serviceYear = s;
        salary = sal;
    }

    // Destructor
    ~Employee() {
        Cout << “\nEmployee object destroyed.\n”;
    }

    String getName() {
        Return name;
    }

    Int getAge() {
        Return age;
    }

    Int getServiceYear() {
        Return serviceYear;
    }

    Double getSalary() {
        Return salary;
    }
};

Int main() {
    Employee emp(“James Mwangi”, 35, 10, 55000);

    Cout << “Name: “ << emp.getName() << endl;
    Cout << “Age: “ << emp.getAge() << endl;
    Cout << “Service Years: “ << emp.getServiceYear() << endl;
    Cout << “Salary: Ksh “ << emp.getSalary() << endl;

    Return 0;
}