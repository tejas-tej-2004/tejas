
// C++ program to show binary operator overloading
#include <iostream>
using namespace std;

class Distance {
    int feet, inch;
public:
    Distance(int ft, int in) {
        this->feet = ft;
        this->inch = in;
    }

    // Overloading(+) operator to perform addition of two distance object Call by reference
    Distance operator+(Distance& d2) {
        // Create an object to return
        Distance d3(0,0);
        d3.feet = this->feet + d2.feet;
        d3.inch = this->inch + d2.inch;
        // Return the resulting object
        return d3;
    }

    void display() {
        cout << "Total Feet & Inches: " << feet << "'" << inch << endl;
    }
};
//Driver code
int main() {
        cout<<"Name: Hitendrasingh Vishnu Ranganekar\n";
    cout<<"Div: B\n";
    cout<<"Roll No: 18\n\n";
    Distance d1(10, 9);
    Distance d2(8, 2);
    Distance d3 = d1 + d2;

    // Use overloaded operator
    d3.display();
    return 0;
}


/*
Output:

Name: Hitendrasingh Vishnu Ranganekar
Div: B
Roll No: 18

Total Feet & Inches: 18'11
*/