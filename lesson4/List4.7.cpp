#include <iostream>
#include <string>

using namespace std;

int main()
{
	string greetString("Hello std::string!");
	cout << greetString << endl;

	string firstLine;
	cout << "pre-initialization of a string: " << firstLine << endl;
	cout << "length of string: " << firstLine.length() << endl;
	cout << "Enter a line of text: ";
	getline(cin, firstLine);

	cout << "Get another: ";
	string secondLine;
	getline(cin, secondLine);

	cout << "Result of concatenation: ";
	string concatString = firstLine + " " + secondLine;
	cout << concatString << endl;
	
	cout << "Copy of concatenated string: ";
	string aCopy = concatString;
	cout << aCopy << endl;

	cout << "Length of concatenated string: "\
	   	 << concatString.length() << endl;

	return 0;
}
