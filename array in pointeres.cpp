#include<iostream>
using namespace std;
int main()
{
	int marks[5];
	int *ptr=marks;
	for(int i=0;i<5;i++)
	{
	
	  cout<<"enter the marks"<<endl;
	  cin>>marks[i];
	  }
	for(int i=0;i<5;i++)
	{
		cout<<"marks are "<<*(ptr+i)<<endl;
	}
}
