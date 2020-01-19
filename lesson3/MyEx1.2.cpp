#include <iostream>

int main()
{
	using namespace std;

	unsigned int kcPopul = 500'000;
	unsigned short int piperPopul{5'000};

	cout << "The population of Kansas City is: " << kcPopul << endl;
	cout << "The population of Piper is: " << piperPopul << endl;
	cout << "sizeof(piperPopul):" << sizeof(piperPopul) << endl;
	return 0;	
}
