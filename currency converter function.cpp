#include<iostream>
using namespace std;
//no return no argument
//indian rupees to dollar
void RupeesToDollar()
{
	float RS;
	cout<<"enter indian ruppes : "<<endl;
	cin>>RS;
	float result=RS/81.71;
	cout<<"\nyour dollar is : ";
	cout<<result<<endl;
	
}
void dollarToRuppes()
{
	float D;
	cout<<"enter dollars : "<<endl;
	cin>>D;
	float result=D*81.71;
	cout<<"\nyour rupees is : ";
	cout<<result<<endl;
	
}


int main()
{
	cout<<"press 1 for INR to DOLLAR "<<endl;
	cout<<"press 2 for DOLLAR to INR"<<endl;
	int input;
	cin>>input;
	switch (input)
	{
		case 1: RupeesToDollar();
		break;
		case 2: dollarToRuppes();
		break;
		default : cout<<"wrong input"<<endl;
	}
	
	
	
	
	
}

