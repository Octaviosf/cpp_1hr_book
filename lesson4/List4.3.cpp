#include <iostream>
using namespace std;

int main()
{
	const int rows = 3;
	const int cols = 3;
	int threeByThree[rows][cols] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

	cout << "Row 0: " << threeByThree[0][0] << " " \
					  << threeByThree[0][1] << " " \
					  << threeByThree[0][2] << endl;

	cout << "Row 1: " << threeByThree[1][0] << " " \
					  << threeByThree[1][1] << " " \
					  << threeByThree[1][2] << endl;

	cout << "Row 2: " << threeByThree[2][0] << " " \
					  << threeByThree[2][1] << " " \
					  << threeByThree[2][2] << endl;
	return 0;
}
