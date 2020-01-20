#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int inputNum{0};
	cin >> inputNum;

	int halfNum = inputNum >> 1;
	int quarterNum = inputNum >> 2;
	int doubleNum = inputNum << 1;
	int quadNum = inputNum << 2;

	cout << "Half: " << halfNum << endl;
	cout << "Quarter: " << quarterNum << endl;
	cout << "Double: " << doubleNum << endl;
	cout << "Quadruple: " << quadNum << endl;

	return 0;
}
