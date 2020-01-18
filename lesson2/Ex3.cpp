// modifying listing 2.6

#include <iostream>
#include <string>
using namespace std;

int DemoConsoleOutput()
{
	string userName;
	int userBirthYear;
	int currentYear; 

	cout << "Enter your name: " << endl;
	cin >> userName;
	cout << "What year were you born?:" << endl;
	cin >> userBirthYear;
	cout << "What is the current year?: " << endl;
	cin >> currentYear;
	cout << userName << " is " << currentYear - userBirthYear << 
		" years old." << endl;
	return 0;
}

int main()
{
	return DemoConsoleOutput();
}	

