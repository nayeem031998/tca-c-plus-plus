//x^3+y^3+z^3=armstrong number
//111 =1^3+1^3+1^3=1+1+1=3 != armstrong no
//153=1^3+5^3+3^3=1+125+27=153 =armstrong no

#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter"<<endl;
	cin>>x;
	int sum=0;
	int digit;
	int org=x;
	while(x!=0)
	{
		digit=x%10;
		sum+=digit*digit*digit;
		x=x/10; 
		
		
		
	}
	cout<<"sum is "<<sum<<endl;
	if(org==sum)
	{
		cout<<"it is a armstrong number "<<endl;
	}
	else
	{
		cout<<"it is not a armstrong number"<<endl;
	}
}
