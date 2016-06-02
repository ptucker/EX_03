// Grant Bingham
// CS 172
// Ex. 9.2

//UML
//Class: Fan
//-------------------------------
// - speed
// - on
// - radius
//----------------------------
// + Fan()
// + Fan(int setspeed, bool seton, double setradius)
// + int getSpeed()
// + int getOn()
// + int getRadius()
// + void changeSpeed
// + void changeOn
// + void changeRadius
//----------------------------------
#include <iostream>
using namespace std;

class Fan 
{
private:
	// Properties of Fan
	int speed;
	bool on;
	double radius;
public:
	// Constructors
	Fan()
	{
		speed = 1;
		on = false;
		radius = 5;
	}
	Fan(int setspeed, bool seton, double setradius)
	{
		speed = setspeed;
		on = seton;
		radius = setradius;
	}
	// Return Parameters of the Fan
	int getSpeed()
	{
		return speed;
	}
	bool getOn()
	{
		return on;
	}
	double getRadius()
	{
		return radius;
	}
	// Mutator Functions
	void changeSpeed(int newspeed)
	{
		speed = newspeed;
	}
	void changeOn(bool newon)
	{
		on = newon;
	}
	void changeRadius(double newradius)
	{
		radius = newradius;
	}
};

int main()
{
	Fan fan1(3, true, 10);
	Fan fan2(2, false, 5);
	cout << fan1.getSpeed() << endl;
	cout << fan1.getOn() << endl;
	cout << fan1.getRadius() << endl;
	cout << fan2.getSpeed() << endl;
	cout << fan2.getOn() << endl;
	cout << fan2.getRadius() << endl;
}