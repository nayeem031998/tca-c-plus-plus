#include <iostream>
using namespace std;
int main()
{
	 int x;
	 cout<<"enter the nummber of rows"<<endl;
	 cin>>x;
	 for(int i=1;i<=x;i++)
	 {
	 	for(int j=1;j<=x-i;j++)
	 	{
	 		cout<<" ";
		 }
		 for(int k=0;k<=1*i-1;k++)
		 {
		 	cout<<" ";
		 	cout<<"*";
		 	
		 }
		 cout<<"\n";
	 }
	
	//3
	//
	
	
	
	
	
}
