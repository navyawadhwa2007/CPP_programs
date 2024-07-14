#include <iostream>
using namespace std;
class Tricycle
{
	public:
		int getSpeed();
		void setSpeed(int speed);
		void pedal();
		void brake();
		
	private:
		int speed;	
};


int Tricycle::getSpeed()
{
	return speed;
}

void Tricycle::setSpeed(int newSpeed)
{
	if (newSpeed>=0)
	{
		speed=newSpeed;
	}
}
void Tricycle::pedal()
{
	setSpeed(speed+1);
	cout<<"\nPedalling; tricycle speed"<<speed<<"mph\n";
}
void Tricycle::brake()
{
	setSpeed(speed-1);
	cout<<"\nBraking; tricycle speed"<<speed<<"mph\n";
}

int main()
{
	Tricycle wichita,navya;
	wichita.setSpeed(0);
	wichita.pedal();
	wichita.pedal();
	wichita.brake();
	wichita.brake();
	wichita.brake();
	
	
    navya.setSpeed(10);
	navya.pedal();
	navya.pedal();
	navya.brake();
	navya.brake();
	navya.brake();
	
	return 0;
}





