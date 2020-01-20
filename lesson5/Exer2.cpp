#include <iostream>

using namespace std;

int main()
{
	cout << "Choose a number: ";
	int number{0};
	cin >> number;

	int result = number << 1 + 5 << 1;
	cout << number << " << 1 + 5 << 1 = "
	     << result << endl;

	return 0;
}

