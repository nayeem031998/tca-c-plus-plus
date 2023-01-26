//fibonacci series
//0,1,1,2,3,5 //find  fibbonacci series upto given no
//maximum term
#include<iostream>
using namespace std;
int main()
{
	int n,x,y,z,count=0;
	cout<<"enter max term"<<endl;
	cin>>n;
	
	x=0;
	y=1;
	z=0;
	while(z<=n)
	{
		
		cout<<z <<endl;
		x=y;
		y=z;
		z=x+y;
	}
	cout<<"\t \t \t"<<endl;
	int l=0;
	int m=1;
	int p=0;
	while(count<n)
	{
		cout<<p<<endl;
		count=count+1;
		l=m;
		m=p;
		p=l+m;
	}
	
	
}
