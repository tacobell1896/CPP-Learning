// read first and last name
#include "std_lib_facilities.h"
int main()
{
	cout << "Please enter your first and last name\n";
	string first;
	string last;
	cin >> first >> last; //read two strings
	string name =  first + " " + last; // concatenate strings
	cout << "Hello, " << name << "\n";
}
