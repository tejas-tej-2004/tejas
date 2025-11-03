#include <iostream>
using namespace std;

struct student
{
	string name;
	int roll_no;
	char div;
	float marks;
};
int main()
{
	
	    cout<<"Name: Tejas Digambar kale \n";
    cout<<"Div: B\n";
    cout<<"Roll No: 106\n\n";
   
	student s;
	cout<<"enter name:";
	cin>>s.name;
	cout<<"enter roll_no:";
	cin>>s.roll_no;
	cout<<"enter div:";
	cin>>s.div;
	cout<<"enter marks:";
	cin>>s.marks;
	
	cout<<endl;
	cout<<"name:" <<s.name <<endl;
	cout<<"roll_no:" <<s.roll_no <<endl;
	cout<<"div:" <<s.div <<endl;
	cout<<"marks:" <<s.marks <<endl;
	
	return 0;
	
}
/*
O/P:
Name: Tejas Digambar kale
Div: B
Roll No: 106

enter name:Tejas 
enter roll_no:106
enter div:B
enter marks:95

name:hitendra
roll_no:18
div:B
marks:95

*/



