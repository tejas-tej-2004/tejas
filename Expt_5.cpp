
/* C++ program to find Area using Function Overloading */

#include<iostream>
using namespace std;
int area(int);
int area(int, int);
float area(float);
float area(float, float);

int main()
{
    cout<<"Name: Hitendrasingh Vishnu Ranganekar\n";
    cout<<"Div: B\n";
    cout<<"Roll No: 18\n\n";
    int a, l, b;
    float r, bs, ht;
    cout<<"Enter side of a square:";
    cin>>a;
    cout<<"Enter length and breadth of rectangle:";
    cin>>l>>b;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Enter base and height of triangle:";
    cin>>bs>>ht;
    cout<<"Area of square is "<<area(a)<<endl;
    cout<<"Area of rectangle is "<<area(l, b)<<endl;
    cout<<"Area of circle is "<<area(r)<<endl;
    cout<<"Area of triangle is "<<area(bs, ht)<<endl;
    return 0;
}

int area(int a)
{
    return(a*a);
}

int area(int l, int b)
{
    return(l*b);
}

float area(float r)
{
    return(3.14*r*r);
}

float area(float bs, float ht)
{
    return(0.5*bs*ht);
}

/* Output:

Enter side of a square: 5
Enter length and breadth of rectangle: 2 4
Enter radius of circle: 3
Enter base and height of triangle: 1 4
Area of square is 25
Area of rectangle is 8
Area of circle is 28.26
Area of triangle is 2
*/