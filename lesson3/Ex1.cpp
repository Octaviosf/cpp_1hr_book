#include <iostream>

int main()
{
	using namespace std;
	enum YourCards {Ace=43, Jack, Queen, King}; 
	YourCards myCard{Queen};

	cout << "The value of Queen is: " << myCard << endl;
	return 0;
}
