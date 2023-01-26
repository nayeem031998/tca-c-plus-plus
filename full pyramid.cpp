#include<iostream>
using namespace std;
int main()
{
	char x;
	int num1,num2;
	
	cout<<"enter  numbers"<<endl;
	cin>>num1>>num2;
	cout<<"enter operator : +,-,*,/,% "<<endl;
	cin>>x;
	
	
	switch (x)
	{
		case '+' :
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
			break;
		case '-' :
			cout<<num1<<"-"<<num2<<"="<<num1-num2;
			break;
		case '*' :
		    cout<<num1<<"*"<<num2<<"="<<num1*num2;
			break;
		case '/' :
		    cout<<num1<<"/"<<num2<<"="<<num1/float(num2);
			break;
		case '%':
		    cout<<num1<<"%"<<num2<<"="<<num1% num2;
			break;
		default :
		 cout<<"error operator is incorrect";
		 break;				
				
	}
	
}
