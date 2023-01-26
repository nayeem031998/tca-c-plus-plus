
#include<iostream>
using namespace std;
//with argument no return
//marketing 
void doMarketing(int a,int b)
{
	int moneyRecievd=a;
	int moneyLeft=moneyRecievd-b;
	cout<<"money left RS : "<<moneyLeft;
}
int main(){
	doMarketing(200,50);
	
}
