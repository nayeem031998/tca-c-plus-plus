#include<iostream>
using namespace std;
int fibbonacci(int n)
{
int a=0,b=1,c,i;
if(n==0){


	return a;
}
for(int i=2;i<=n;i++)
{
	c=a+b;
	a=b;
	b=c;
	
}
return b;
	
}
int main()
{
int n;
cin>>n;
cout<<fibbonacci(n);	
}
//
