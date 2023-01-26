#include<iostream>
using namespace std;

struct stdDetails {
	string name;
	int age;
	string address;
};

int main()
{
	cout<<"Welcome to IIT Mumbai\n";
	cout<<"1st year science admission on going\n";
	cout<<"=============================\n";
	
	
	stdDetails allScienceStudents[2];
	
	for(int i=0;i<2;i++){
		stdDetails x;
		cout<<"Name: ";cin>>x.name;
		cout<<endl;
		cout<<"Age: ";
		cin>>x.age;
		cout<<endl;
		cout<<"Address: ";
		cin>>x.address;
		cout<<endl;
		allScienceStudents[i]=x;
	}
	
		cout<<"All student of science\n";
		
	for(int i=0;i<2;i++){
		cout<<"=========================\n";
	cout<<"Name:"<<	allScienceStudents[i].name<<endl;
	cout<<"Address:"<<	allScienceStudents[i].address<<endl;
	}
}
