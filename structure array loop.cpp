#include<iostream>
using namespace std;
struct student
{
int roll=2;
float marks=50.32;
string n="naYEEM";	
};
struct student st[2];

int main()
{
	
	for(int i=0;i<2;i++)
	{
	cout<<"enter data for student"<<endl;
	cin>>st[i].roll>>st[i].marks>>st[i].n;
	cout<<"roll is :"<<st[i].roll<<endl;
	cout<<"marks is "<<st[i].marks<<endl;
	cout<<"name is :"<<st[i].n<<endl; 	
	}
	for(int i=0;i<2;i++)
	{
		
	cout<<"roll is :"<<st[i].roll<<endl;
	cout<<"marks is "<<st[i].marks<<endl;

	cout<<"name is :"<<st[i].n<<endl; 
	}
	
	
	
//	cout<<"roll is :"<<st[i].roll<<endl;
//	cout<<"marks is "<<st[i].marks<<endl;
//	cout<<"name is :"<<st[i].n<<endl; 
	
}
