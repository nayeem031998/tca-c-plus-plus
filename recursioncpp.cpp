#include<iostream>
using namespace std;

int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return fib(n-1)+fib(n-2); //(3-1)+(3-2)=1+1 =//(4-1)+(4-2)=
		                                      //fib(3)+fib(2)=
		
	                                          //fib(2)+fib(1) +  fib(1)+fib(0)
											  //fib(1)+fib(0)+  1+  1+0
											  //1+0+1+1+0
	}
}
int main()
{
	int x;
	cin>>x;
	cout<<fib(x);
}

//0,1,1,2,3,5,8
