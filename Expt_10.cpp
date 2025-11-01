#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
private:
    int no;
    string name;

public:
    // Pure virtual functions (declared = 0, defined outside if needed)
    virtual void salary() = 0;
    virtual void display() = 0;

protected:
    // Common input and display methods accessible by derived classes
    void inputBasicInfo() {
        cout << "Enter employee number: ";
        cin >> no;
        cout << "Enter employee name: ";
        cin >> name;
    }

    void displayBasicInfo() {
        cout << "Employee Number: " << no << endl;
        cout << "Employee Name: " << name << endl;
    }
};

// Derived class 1: SalariedEmployee
class SalariedEmployee : public Employee {
private:
    double monthlySalary;

public:
    void salary() override {
        inputBasicInfo();
        cout << "Enter employee monthly salary: ";
        cin >> monthlySalary;
    }

    void display() override {
        cout << "\nSalaried Employee:\n";
        displayBasicInfo();
        cout << "Salary: " << monthlySalary << endl;
    }
};

// Derived class 2: HourlyEmployee
class HourlyEmployee : public Employee {
private:
    double hours;
    double rate;

public:
    void salary() override {
        inputBasicInfo();
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;
    }

    void display() override {
        cout << "\nHourly Employee:\n";
        displayBasicInfo();
        cout << "Hours: " << hours << endl;
        cout << "Hourly Rate: " << rate << endl;
        cout << "Salary: " << (hours * rate) << endl;
    }
};

// Derived class 3: CommissionedEmployee
class CommissionedEmployee : public Employee {
private:
    double baseSalary;
    int overtime;

public:
    void salary() override {
        inputBasicInfo();
        cout << "Enter base salary: ";
        cin >> baseSalary;
        cout << "Enter overtime hours: ";
        cin >> overtime;
    }

    void display() override {
        cout << "\nCommissioned Employee:\n";
        displayBasicInfo();
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Overtime Hours: " << overtime << endl;
        cout << "Total Salary: " << (baseSalary + (overtime * 15)) << endl;
    }
};

// Main function
int main() {
    cout<<"Name: Hitendrasingh Vishnu Ranganekar\n";
    cout<<"Div: B\n";
    cout<<"Roll No: 18\n\n";
    Employee* employees[3];

    SalariedEmployee salaried;
    HourlyEmployee hourly;
    CommissionedEmployee commissioned;

    employees[0] = &salaried;
    employees[1] = &hourly;
    employees[2] = &commissioned;

    cout << "\n=== Enter Employee Details ===\n";
    for (int i = 0; i < 3; i++) {
        employees[i]->salary();
        cout << endl;
    }

    cout << "\n=== Employee Details ===\n";
    for (int i = 0; i < 3; i++) {
        employees[i]->display();
        cout << endl;
    }

    system("pause");
    return 0;
}