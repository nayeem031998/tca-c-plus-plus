//class
//
#include<iostream>
#include<conio.h>
using namespace std;
class  station
{
	private :
	int noOfguards;
	public :
	int noOfcards;
	void issueCards()
	{
		noOfcards =noOfcards -1;
		
	}
	void travelInMetro()
	{
		
	}
	
};
class car
{
	private :
		int seatCapacity;
		int noOfGears;
		int noOfwheels;
		int Velocity=0;
		void startEngine()
		{
			cout<<"engine started"<<endl;
			
		}
		void changeGear()
		{
          Velocity = Velocity+40;
         
		}
		void reverse_gear()
		{
			Velocity=Velocity-10;
		}
		
};
int main()
{
	
}

