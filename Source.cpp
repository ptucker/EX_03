// Grant Bingham
// CS 172
// Ex. 10.10

//PT -- 16/20

//UML
//Class: MyInteger
//------------------
// - int value
//------------------
// + MyInteger()
// + MyInteger(int setvalue)
// + int getValue()
// + const bool isEven()
// + const bool isOdd()
// + const bool isPrime()
// + static bool isEven(int newvalue)
// + static bool isOdd(int newvalue)
// + static bool isPrime(int newvalue)
// + static bool isEven(const MyInteger& newvalue)
// + static bool isOdd(const MyInteger& newvalue)
// + static bool isPrime(const MyInteger& newvalue)

#include <iostream>
using namespace std;

class MyInteger
{
	private:
		int value;
	public:
		MyInteger()
		{
			value = 0;
		}

		MyInteger(int setvalue)
		{
			value = setvalue;
		}

		int getValue()
		{
			return value;
		}

		//PT -- check this out:
		//PT const bool isEven() { return (value % 2 == 0); }
		const bool isEven()
		{
			if (value % 2 == 0)
			{
				return true;
			}
			return false;
		}

		//PT -- check this out:
		//PT const bool isEven() { return !isEven(); }
		const bool isOdd()
		{
			if (value % 2 == 1)
			{
				return true;
			}
			return false;
		}

		const bool isPrime()
		{
			//PT -- only need to go to value / 2 (why?)
			for (int i = 1; i < value; i++)
			{
				if (value % i == 0)
				{
					return false;
				}
			}
			return true;
		}

		static bool isEven(int newvalue)
		{
			if (newvalue % 2 == 0)
			{
				return true;
			}
			return false;
		}

		static bool isOdd(int newvalue)
		{
			if (newvalue % 2 == 1)
			{
				return true;
			}
			return false;
		}

		static bool isPrime(int newvalue)
		{
			for (int i = 1; i < newvalue; i++)
			{
				if (newvalue % i == 0)
				{
					return false;
				}	
			}
			return true;
		}

		static bool isEven(const MyInteger& newvalue)
		{
			//PT
			//return newValue.isEven();
		}
		
		static bool isOdd(const MyInteger& newvalue)
		{
			//PT
			//return newValue.isPrime();
		}

		static bool isPrime(const MyInteger& newvalue)
		{
			//PT
			//return newValue.isPrime();
		}

};			

int main()
{
	MyInteger val();
	MyInteger val1();
}
