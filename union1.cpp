#include<iostream>

using  namespace std;
union student 
{
	int roll;
	
	char n[20];
	float marks;
};

int main()
{
union student record;
record.roll=12;
record.n=;
record.marks=234;

cout<<"roll is"<<record.roll<<endl;
cout<<"name is "<<record.n<<endl;
cout<<"marks="<<record.marks<<endl;	
}
