#include <iostream>

using namespace std;

int main()
{
	cout << "Is it raining? ";
	bool raining{0};
	cin >> raining; cout << endl;

	cout << "Are there buses in the street? ";
	bool buses{0}; 
	cin >> buses; cout << endl;

	if (raining && !buses)
		cout << "You cannot go to work." << endl;
	else
		cout << "You can go to work!" << endl;

	if (raining && buses)
		cout << "Take an umbrella." << endl;

	if (!raining && buses)
		cout << "Its a sunny day! Enjoy!" << endl;

	return 0;
}
