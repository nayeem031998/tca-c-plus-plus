#include<iostream>
using namespace std;
int main()
{
	
	int x,rev,org;
	start:
	
  rev=0;
  ;
cout<<"enter a number to check palindrome number: "<<endl;//121
cin>>x;
org=x;
while(x>0)
{   
	rev=((rev*10)+(x%10));// 5//54
x=x/10;


}


if(org==rev)
{
	cout<<"it is pallindrome"<<endl;
}
else
{
	cout<<"it is not a palindrome number"<<endl;
}
goto start;
return 0;
}

