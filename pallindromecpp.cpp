#include<iostream>
using namespace std;
int main() 
{
	int x,rev=0,org;
	cout<<"enter  a number to check pallindrome number"<<endl;
	cin>>x;
	org=x;
	while(x>0)
	{
		rev=((rev*10)+(x%10));
		x=x/10;
	}
	if(org==rev)
	{
		cout<<"it is a pallindrome number"<<endl;
	}
	else
	{
		cout<<"it is not a pallindrome number"<<endl;
	}
}
