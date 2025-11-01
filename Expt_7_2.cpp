

#include <iostream>
using namespace std;

// Base class Person
class Person {
public:
    Person() {
        cout << "Person's constructor called" << endl;
    }
};

// Derived class 1: Faculty
class Faculty : public Person {
public:
    Faculty() {
        cout << "Faculty's constructor called" << endl;
    }
};

// Derived class 2: Student
class Student : public Person {
public:
    Student() {
        cout << "Student's constructor called" << endl;
    }
};

// Derived class 3: TA (inherits from both Faculty and Student)
class TA : public Faculty, public Student {
public:
    TA() {
        cout << "TA's constructor called" << endl;
    }
};

int main() {
    cout<<"Name: Hitendrasingh Vishnu Ranganekar\n";
    cout<<"Div: B\n";
    cout<<"Roll No: 18\n\n";
    TA ta; // creating an object of TA
    return 0;
}

/*
Output:

Name: Hitendrasingh Vishnu Ranganekar
Div: B
Roll No: 18

Person's constructor called
Faculty's constructor called
Person's constructor called
Student's constructor called
TA's constructor called

*/