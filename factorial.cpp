#include <iostream>
using namespace std;
int main()
{
	int x;
	int factorial =1;
	cout<<"enter a number"<<endl;
	cin>>x;
	while(x>1)
	{
		factorial *=x;
		x--;
	}
	cout<<factorial<<endl;
}
