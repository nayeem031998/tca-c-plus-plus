#include<iostream>
using namespace std;
int main()
{
	int x;//5
	cout<<"enter the number of rows"<<endl;
	cin>>x;
	for(int i=x;i>=1;i--) 
	{
		for(int j=x;j>=x-i+1;j--)
		{
		cout<<j<<"";
	}
		cout<<"\n";
	
	}
	
}
//5 
//54321
//5432
//543
//54
//5
