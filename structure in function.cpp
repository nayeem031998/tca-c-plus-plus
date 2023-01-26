#include<iostream>
using namespace std;
struct student 
{
	int roll ;
	float marks;
	string name;
	void student name()
	{
		cout<<""
	}
};

void studentInformation(student st)
{
	cout<<"\nstudent information"<<endl;
	cout<<"roll is "<<st.roll<<endl;
	cout<<"marks is"<<st.marks<<endl;
	cout<<"name is "<<st.name<<endl;
}

int main()
{
	int x;
	cout<<"enter loop count"<<endl;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
	
	 student st;
	 
	
	cout<<"enter data for student"<<endl;
	cin>>st.roll>>st.marks>>st.name;
	studentInformation(st);
}
	

	
}



