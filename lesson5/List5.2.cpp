#include <iostream>
using namespace std;

int main()
{
	int startValue = 101;
	cout << "Start value of integer being operated: " << startValue << endl;

	cout << "---" << endl;

	int postfixInc = startValue++;
	cout << "Result of postfix increment: " << postfixInc << endl;
	cout << "After postfix increment, startValue = " << startValue << endl;

	cout << "---" << endl;

	startValue = 101;
	int prefixInc = ++startValue;
	cout << "Result of prefix increment: " << prefixInc << endl;
	cout << "After prefix increment, startValue = " << startValue << endl;

	cout << "---" << endl;

	startValue = 101;
	int postfixDec = startValue--;
	cout << "Result of postfix decrement: " << postfixDec << endl;
	cout << "After postfix decrement, startValue = " << startValue << endl;

	cout << "---" << endl;

	startValue = 101;
	int prefixDec = --startValue;
	cout << "Result of prefix decrement: " << prefixDec << endl;
	cout << "After prefix decrement, startValue = " << startValue << endl;

	return 0;
}
