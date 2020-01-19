#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	cout << "To calculate the area and circumference of a circle, " <<
		"enter the radius: ";
	unsigned int radius{0};
	cin >> radius;

	unsigned int area=M_PI*radius*radius;
	unsigned int circum=2*M_PI*radius; 

	cout << "The area of your circle is: " << area << endl;
	cout << "The circumference is: " << circum << endl;

	return 0;
}

