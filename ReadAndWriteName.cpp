// Read and write first name 
#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name and age:\n";
	string firstName = "???"; // firstName is a variable of type string
	double age = 0;
	cin >> firstName >> age; // reads characters into firstName
	age = age * 12;
	cout << "Hello, " << firstName <<" (age " << age << ")!\n";
}
