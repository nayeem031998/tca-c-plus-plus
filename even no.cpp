#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter two number"<<endl;
	cin>>x>>y;
	int count=0;
	int sum=0;
	while(x<=y)
	{
		if(x%2==0)
		{
			cout<<x<<endl;
			count+=1;
			sum+=x;
		}
		x++;
	}
	cout<<"total count is"<<count<<endl;
	cout<<"total sum is"<<sum;
}
