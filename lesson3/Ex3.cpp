#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	cout << "To calculate the area and circumference of a circle, " << 
		"enter the radius: ";
	unsigned short radius{0};
	cin >> radius;

	double area{M_PI*radius*radius};
	double circum{2*M_PI*radius};

	cout << "The area of your circle is: " << area << endl;
	cout << "The circumference of your circle is: " << circum << endl;
	return 0;
}
