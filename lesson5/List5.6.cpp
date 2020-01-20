#include <iostream>

using namespace std;

int main()
{
	cout << "Is there a discount on your favorite car? ";
	bool onDiscount{0};
	cin >> onDiscount; cout << endl;

	cout << "Did you get a fantastic bonus? ";
	bool fantasticBonus{0};
	cin >> fantasticBonus; cout << endl;

	if (onDiscount || fantasticBonus)
		cout << "Congratulations, you can buy that car!" << endl;
	else
		cout << "Sorry, waiting a while is a good idea" << endl;

	if (!onDiscount)
		cout << "Car not on discount." << endl;

	return 0;
}
