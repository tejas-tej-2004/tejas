//Expt_6_2
// C++ program to implement Hierarchical Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle {
    public:
        Vehicle() { cout << "This is a Vehicle\n"; 
        }
};

// first subclass
class Car : public Vehicle {
    public:
        Car() { cout << "This Vehicle is Car\n";
        }
};

// second subclass
class Bus : public Vehicle {
    public:
        Bus() { cout << "This Vehicle is Bus\n";
        }
};

// main function
int main()
{
    cout<<"Name: Hitendrasingh Vishnu Ranganekar\n";
    cout<<"Div: B\n";
    cout<<"Roll No: 18\n\n";
    // Creating object of subclass will
    // invoke the constructor of base class.
    Car obj1;
    Bus obj2;
    return 0;
}
/*
Output:
Name: Hitendrasingh Vishnu Ranganekar
Div: B
Roll No: 18

This is a Vehicle
This Vehicle is Car
This is a Vehicle
This Vehicle is Bus
*/