#include<iostream>
using namespace std;
int arr[5];
 main()

{
	int largest=arr[0];
	int smallest=arr[0];
	cout<<"enter the element of array"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
		
	}
	cout<<"newly generated array is "<<endl;
	cout<<"{";
	int sum=0;
	for(int i=0;i<5;i++)
	
	{
		cout<<arr[i]<<" ";
		sum+=arr[i];
	
	
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
		else
		{
			if(arr[i]<arr[i])
			{
				smallest=arr[i];
			}
		}
	}
	cout<<" }"<<endl;
	cout<<"sum is "<<sum<<endl;
			cout<<"largest element is "<<largest<<" "<<endl;
			cout<<"smallest element is"<<smallest<<" "<<endl;
		
	
}
