#include <iostream>
using namespace std;

int getValueFromUser() //defines function
{
	int newv;
	cout << "Enter an integer: ";
	cin >> newv;
	return newv;
}

int main()
{
	int numberA{ getValueFromUser() };
	int numberB{ getValueFromUser() };

	cout << numberA << " x " << numberB << " = " << numberA * numberB;
	
}