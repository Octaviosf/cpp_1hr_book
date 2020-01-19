#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char> dynEmptyArray(10);
	vector<char> dynArray{'H', 'e', 'l', 'l'};

	cout << "The 5th element of dynEmptyArray: " << dynEmptyArray[4] << endl;

	cout << "The current dynArray: " \
		 << dynArray[0] << dynArray[1] \
		 << dynArray[2] << dynArray[3] << endl;

	char statArray[] = {'H', 'e', 'l', 'l'};
	
	cout << "size of dynEmptyArray: " << sizeof(dynEmptyArray) << endl;
	cout << "size of dynArray: " << sizeof(dynArray) << endl;
	cout << "size of statArray: " << sizeof(statArray) << endl;

	cout << "Enter a new character: ";
	char newChar = '\0';
	cin >> newChar;
	dynArray.push_back(newChar);

	cout << "The new dynArray: " \
		 << dynArray[0] << dynArray[1] \
		 << dynArray[2] << dynArray[3] \
		 << dynArray[4] << endl;
	
	cout << "size: " << sizeof(dynArray) << endl;

	return 0;
}
