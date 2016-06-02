// Grant Bingham
// CS 172
// Ex. 9.11

//UML
//-----------------
// Class EvenNumber
//-----------------
// - int value
//-----------------
// + EvenNumber
// + EvenNumber(int setvalue)
// + int getValue
// + int getNextvalue()
// + int getPreviousValue()

#include <iostream>
using namespace std;

class EvenNumber
{
	private:
		int value;
	public:
	EvenNumber()
	{
		value = 0;
	}
	EvenNumber(int setvalue)
	{
		value = setvalue;
	}

	int getValue()
	{
		return value;
	}
	
	int getNextValue()
	{
		return value + 2;
	}

	int getPreviousValue()
	{
		return value - 2;
	}
};


int main()
{
	EvenNumber Even1(16);
	cout << Even1.getValue() << endl;
	cout << Even1.getNextValue() << endl;
	cout << Even1.getPreviousValue() << endl;
}
