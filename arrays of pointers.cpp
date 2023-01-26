#include<iostream>

using namespace std;

int main()
{
	int *p[10];
	int a[]={10,23,32,62,32,54,95,70,95,45};
	for(int i=0;i<10;i++)
	{
		*p[i]=&a[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<"value of array is"<<*p[i]<<endl;
	}


	
}
