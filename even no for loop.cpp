#include<iostream>
using namespace std;
int main()
{
	int x,i, y;
	cout<<" enter first number"<<endl;
	cin>>x;
	cout<<"enter last number"<<endl;
	cin>>y;
	int sum=0;
	int count=0;
	
	for(int i=x;i<=y;i++)
	{
		if(i%2==0)
		{
			cout<<i<<endl;
			sum+=i;
			count+=1;
		}
		
	}
	cout<<"sum is"<<sum<<endl;
	cout<<"count is"<<count<<endl;
}
