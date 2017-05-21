// This is the Letter Generator program. Have fun writing this letter
#include "std_lib_facilities.h"

int main() {
	string first_name, friend_name;
	cout << "What is your first name?\n";
	cin >> first_name;
	cout << "What is your friend's name?\n";
	cin >> friend_name;

	cout << "Dear " + friend_name + ",\n"
	+ "	Hey its your friend " + first_name
	+ " How are you? I am fine. Have fun in Columbus, we really miss you!\n";
}
