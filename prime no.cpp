#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter a number"<<endl;
	cin>>x;
	int i=2;
	while(i<x)
	{
		if(x%i==0)
		{
			cout<<x<<"is not a prime number"<<endl;
			break;
		}
		i++;
	}
	if(x==i)
	{
		cout<<x<<"is a prime number"<<endl;
	}
}
