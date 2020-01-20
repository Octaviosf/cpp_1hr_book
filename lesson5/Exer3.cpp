#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	cout << "Enter boolean value one: ";
	bool firstBool{0};
	cin >> firstBool;

	cout << "sizeof(firstBool) = " << sizeof(firstBool) << endl;

	cout << "Enter boolean value two: ";
	bool secondBool{0};
	cin >> secondBool;

	cout << firstBool << " & " << secondBool << " = "
		 << (firstBool & secondBool) << endl;

	cout << firstBool << " | " << secondBool << " = "
		 << (firstBool | secondBool) << endl;

	cout << firstBool << " ^ " << secondBool << " = "
		 << (firstBool ^ secondBool) << endl;

	bitset<1> bitwiseFirstNot{~firstBool};
	cout << "~" << firstBool << " = " << bitwiseFirstNot << endl;
	bitset<1> bitwiseSecondNot{~secondBool};
	cout << "~" << secondBool << " = " << bitwiseSecondNot << endl;

	return 0;
}
