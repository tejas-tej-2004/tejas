//Expt_6_1
#include<iostream>
using namespace std;
class Student
{
    protected:
    int roll;
    char name[20];
    public:
    void getstud()
    {
        cout << "Enter Student Rollno : ";
        cin >> roll;
        cout << "Enter Name : ";
        cin >> name;
    }
    void putstud()
    {
        cout << "Roll No : " << roll << "\n";
        cout << "Name : " << name << "\n";
    }
};
class Mark : public Student     //Class Mark derived from class Student
{
    protected:
    int m1,m2,m3;
    public:
    void getmark()
    {
        cout << "Enter Marks for Subject 1 : ";
        cin >> m1;
        cout << "Enter Marks for Subject 2 : ";
        cin >> m2;
        cout << "Enter Marks for Subject 3 : ";
        cin >> m3;
    }
    void putmark()
    {
        cout << "Marks 1 : " << m1 << "\n";
        cout << "Marks 2 : " << m2 << "\n";
        cout << "Marks 3 : " << m3 << "\n";
    }
};
class Result : public Mark      //Class Result derived from class Mark
{
    int total;
    float avg;
    public:
    void getres()
    {
        getstud();
        getmark();
    }
    void putres()
    {
        putstud();
        putmark();
        total = m1 + m2 + m3;
        avg = total / 3.0;
        cout << "Total : " << total << "\n";
        cout << "Average : " << avg << "\n";
    }
};
int main()
{
    cout<<"Name: Hitendrasingh Vishnu Ranganekar\n";
    cout<<"Div: B\n";
    cout<<"Roll No: 18\n\n";
    Result r;
    //clrscr();
    r.getres();
    r.putres();
    //getch();
}

/*
O/P:
Name: Hitendrasingh Vishnu Ranganekar
Div: B
Roll No: 18

Enter Student Rollno : 18
Enter Name : hitenn
Enter Marks for Subject 1 : 95
Enter Marks for Subject 2 : 97
Enter Marks for Subject 3 : 98
Roll No : 18
Name : hitenn
Marks 1 : 95
Marks 2 : 97
Marks 3 : 98
Total : 290
Average : 96.6667
*/