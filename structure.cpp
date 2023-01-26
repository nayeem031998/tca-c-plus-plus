#include<iostream>
using namespace std;

 //structure structure_name
 //{
 //data
 //};
struct student 
{
	int roll=12;
	float marks=20.35;
	string n= "nayeem";
};


int main()
{
	//struct structure_name obj;
	struct student st;
	cout<<"enter data for student "<<endl;
	cin>>st.roll>>st.marks>>st.n;
	cout<<"roll is: "<<st.roll<<endl;
	cout<<"marks is: "<<st.marks<<endl;
	cout<<"name is: "<<st.n<<endl;
	
}
