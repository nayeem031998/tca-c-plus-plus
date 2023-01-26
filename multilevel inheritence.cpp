#include<iostream>
using namespace std;
class add
{
	public :
		int x;
		int y;
		
};
class result : public add
{
	public:
		int sum()
		{
			int z=x+y;
			return z;
		}
};
class div:public result
{
	public :
		div(int a, int b)
		{
			x=a;
			y=b;
		}
		int evenodd()
		{
			if(sum()%2==0)
			{
				cout<<"even";
			}
			else
			{
				cout<<"odd";
			}
		}
};


int main()
{
div d=div(15,2);
d.evenodd();
cout<<"\n"<<d.y;	
}
