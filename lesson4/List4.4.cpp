#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//vector<int> dynArray(3) = {0}; doesn't work
	//vector<int> dynArray{0, 1, 2};
	vector<int> dynArray (3);
	cout << "The initial values of dynArray are: " \
		 << dynArray[0] << " " \
		 << dynArray[1] << " " \
		 << dynArray[2] << endl; 

	dynArray[0] = 365;
	dynArray[1] = 24;
	dynArray[2] = 7;

	cout << "The number of elements in the array: " \
		 << dynArray.size() << endl;

	cout << "Enter another element to insert: ";
	int newElem{0};
	cin >> newElem;
	dynArray.push_back(newElem);

	cout << "The new number of elements: " \
		 << dynArray.size() << endl;
	cout << "The last element in the array: " \
		 << dynArray[dynArray.size() - 1] << endl;

	return 0;
}
