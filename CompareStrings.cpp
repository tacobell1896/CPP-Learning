// read and compare names
#include "std_lib_facilities.h"
int main()
{
	cout << "Please enter your full name\n";
	string firstName;
	string lastName;
	cin >> firstName >> lastName; // read 2 strings
	if (firstName == lastName) cout << "that's the same name twice\n";
	if (firstName < lastName)
		cout << firstName << " is alphabetically before " << lastName << '\n';
	if (firstName > lastName)
		cout << firstName << " is alphabetically after " << lastName << '\n';
}	
