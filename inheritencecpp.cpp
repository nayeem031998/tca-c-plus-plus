#include<iostream>
using  namespace std;
//there are 5 types of inheritence in cpp
//single inheritence
//multilevel
//hybrid
//heiracial
class add
{
	public :
		int x=90;
		int y=78;
		int k=94;
		int m=120;
		
};
class result : public add //result is child class
{
	public:
		int sum()
		{
			int z=x+k;
			return z;
		}
};
int main()
{
result r;
cout<<r.sum()<<endl;
cout<<r.k;	
}
