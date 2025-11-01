#include <iostream>
using namespace std;
class construct
{
public:
float area;
construct()
{
area=0;
}
construct(int a, int b)
{
area=a*b;
}
void disp()
{
cout<< area<< endl;
}
};
int main()
{
	
	    cout<<"Name: Hitendrasingh Vishnu Ranganekar\n";
    cout<<"Div: B\n";
    cout<<"Roll No: 18\n\n";

construct o;
construct o2(10,20);
o.disp();
o2.disp();
return 1;
}

/*
O/P:

Name: Hitendrasingh Vishnu Ranganekar
Div: B
Roll No: 18

0
200

*/
