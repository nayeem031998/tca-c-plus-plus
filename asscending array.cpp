#include<iostream>
#include<algorithm>
using namespace std;
int a[5];
int main()
{
	cout<<"enter the element"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"newly generated array is"<<endl;
	cout<<"{";
	for(int i=0;i<5;i++)
	{
	
	cout<<a[i]<<" ";
	
}
cout<<"}"<<endl;
sort(a,a+5);
cout<<"element of array in asscending order"<<endl;
cout<<"{";
for(int i=0;i<5;i++)
{
	cout<<a[i]<<" ";

	
}
	cout<<"}";
}

