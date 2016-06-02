// Grant Bingham
// CS 172
// Ex. 10.4
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sort(string& s);

int main()
{
	string s;
	cout << "Enter a word or any string of letters: ";
	cin >> s;
	cout << sort(s) << endl;
}	

string sort(string& s)
{
	bool alpha = false;
	do
	{
		alpha = false;
		for (int i = 0; i < s.size()-1; i++)
		{
			if (s.at(i) > s.at(i+1))
			{
				char temp = s.at(i);
				s.at(i) = s.at(i+1);
				s.at(i+1) = temp;
				alpha = true;
			}
		}
	}while(alpha == true);

	return s;
}

