#include <iostream>
int main() {
	std::string password;
	std::cout << "Please enter the password to access the system: ";
	std::cin >> password;
	if (password == "BroCode123") {
		std::cout << "Access Granted! Welcome Bro!\n";
	}
	else {
		std::cout << "Access Denied! Incorrect Password!\n";
	}
	return 0;
}