// simple program to exercise operators

#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter a floating point value:";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n+1
		<< "\nthree times n ==" << 3*n
		<< "\ntwice n == " << n+n
		<< "\nnsquared == " << n*n
		<< "\nhalf of n == " << n/2
		<< "\nsquare root of n ==" << sqrt(n)
		<< "\nmodulo of n == " << n%2
		<< "\ndivide n by 2 == " << n/2
	      	<< "\n";
}
