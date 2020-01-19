#include <iostream>

int main()
{
	using namespace std;
	auto sizes{(sizeof(unsigned int) == sizeof(int))};
	auto greater{(sizeof(int) < sizeof(long int))};

	cout << "sizeof(unsigned int) == sizeof(int): " << sizes << endl;
	cout << "sizeof(int) < sizeof(long int): " << greater << endl;

	return 0;
}
