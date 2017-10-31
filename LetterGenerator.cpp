// This is the Letter Generator program. Have fun writing this letter
#include "std_lib_facilities.h"

int main() {
	string first_name, friend_name;
	char friend_sex;
	friend_sex = 0;
	cout << "What is your first name?\n";
	cin >> first_name;
	cout << "What is your friend's name?\n";
	cin >> friend_name;

	cout << "Dear " + friend_name + ",\n"
	+ "	Hey its your friend " + first_name
	+ " How are you? I am fine. Have fun in Columbus, we really miss you!\n";
	cout << "Please enter another friend's name.\n";
	cin >> friend_name;
	cout << "Have you seen " + friend_name + " lately?\n";
	cout << "What gender are you? M/W\n";
	cin >> friend_sex;
	if (friend_sex = "m")
		cout << "If you see " + friend_name + " please ask him to call me.\n";
	else
		cout << "If you see " + friend_name + " please ask her to call me.\n";

}
