#include<iostream>
using namespace std;
class student
{
	public: //acess method
	string name;
	int roll;
	float marks;
	//creating a constructer
	student (string n,int r,float m)
	{
		name=n;
		roll=r;
		marks=m;
	}
	void data()
	{
		cout<<"name="<<name<<endl;
		cout<<"roll="<<roll<<endl;
		cout<<"marks="<<marks<<endl;
		
	}
	~student()
	{
		cout<<"\n this is a destructer";
	}
};

int main()
{
	student aditya= student ("aditya",45,78.90);
	aditya.data();
	student rohit=student("rohit",23,78.55);
	rohit.data();
	student priya=student ("priya",24,88.99);
	priya.data();
	//student st;
	//cout<<st.roll;
	//st data()
	
}
