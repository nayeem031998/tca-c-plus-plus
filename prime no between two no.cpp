#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter two number"<<endl;
	cin>>x>>y;
	while(x<y)
	{
	
	int i=2;
	while(i<x)
	{
		if(x%i==0)
		{
			
			break;
		}
		i++;
	}
	if(x==i)
	{
		cout<<x<<"is a prime number"<<endl;
	}
	x++;
	
}
}
