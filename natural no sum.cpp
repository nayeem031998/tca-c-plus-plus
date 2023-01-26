#include<iostream>
using namespace std;
int main()
{
	//sum of first 5 natural numbel
	// 5+4+3+2+1
	//n+(n-1)+(n-2)....while i<=1
	
	int n;
	cout<<"Enter: ";
	cin>>n;
	int sum=0;
	int i=1;
	while (i<=1){
	sum=n*(n+1)/2;//	
	i++;
	}

	
	
	cout<<"\nSum: "<<sum;

}


