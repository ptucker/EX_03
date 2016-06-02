// Grant Bingham
// CS 172
// Ex. 9.6
// UML
//----------------------
// Class QuadraticEquation
//----------------------
// - int a, b, c
//----------------------
// + QuagraticEquation()
// + QuadraticEquation(int newa, int newb, int newc)
// + int getA()
// + int getB()
// + int getC()
// + void changeA()
// + void changeB()
// + void changeC()
// + int getDiscriminant()
// + double getRoot1()
// + double getRoot2()
#include <iostream>
using namespace std;

class QuadraticEquation
{
	private:
		int a, b, c;

	public:	
	
	QuadraticEquation()
	{
		a = 1;
		b = 1;
		c = 1;
	}


	QuadraticEquation(int newa, int newb, int newc)
	{
		a = newa;
		b = newb;
		c = newc;
	}

	int getA()
	{
		return a;
	}
	int getB()
	{
		return b;
	}
	int getC()
	{
		return c;
	}

	void changeA(int seta)
	{
		a = seta;
		return;
	}
	void changeB(int setb)
	{
		b = setb;
		return;
	}
	void changeC(int setc)
	{
		c = setc;
		return;
	}
	int getDiscriminant()
	{
		int d;
		d = (b * b) - (4 * a * c);
		if (d < 0)
		{
			return 0;
		}
		else
		{
			return d;
		}
	}
	double getRoot1()
	{
		double r1;
		r1 = (-b + sqrt(getDiscriminant())) / static_cast<double>(2 * a);
		return r1;
	}
	double getRoot2()
	{
		double r2;
		r2 = (-b - sqrt(getDiscriminant())) / static_cast<double>(2 * a);
		return r2;
	}
};

int main()
{
	cout << "Enter Values for a, b, and c:" << endl;
	int e, f, g;
	cin >> e >> f >> g;
	QuadraticEquation Quad1(e,f,g);
	if (Quad1.getDiscriminant() > 0)
	{
		cout << Quad1.getRoot1() << endl;
		cout << Quad1.getRoot1() << endl;
	}
	else if (Quad1.getDiscriminant() == 0)
	{
		if (Quad1.getRoot1() >= 0)
		{
			cout << Quad1.getRoot1() << endl;
		}
		else
		{
			cout << Quad1.getRoot2() << endl;
		}
	}
	else
	{
		cout << "This equation has no real roots." << endl;
	}
}