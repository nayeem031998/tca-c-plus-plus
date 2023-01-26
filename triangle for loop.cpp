#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter number of rows"<<endl;
	cin>>x;

	for(int i=0;i<x;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			cout<<"  *";
		}
		cout<<"\n";
		
	}
}
