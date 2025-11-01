// C++ program to illustrate the multiple inheritance

#include <iostream>
using namespace std;

// first base class
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

// second base class
class FourWheel {
public:
    FourWheel() { cout << "This is a 4 Wheeler\n"; }
};

// subclass derived from two base classes
class Car : public Vehicle, public FourWheel {
public:
    Car() { cout << "This 4 Wheeler Vehicle is a Car\n"; }
};

// main function
int main() {
    cout<<"Name: Hitendrasingh Vishnu Ranganekar\n";
    cout<<"Div: B\n";
    cout<<"Roll No: 18\n\n";
    // Creating object of subclass will
    // invoke the constructor of base classes.
    Car obj;
    return 0;
}


/*
o/p:

Name: Hitendrasingh Vishnu Ranganekar
Div: B
Roll No: 18

This is a Vehicle
This is a 4 Wheeler
This 4 Wheeler Vehicle is a Car
*/