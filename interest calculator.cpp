#include <iostream>

int main() {
	double bankBalance{};
	std::cout << "Enter your bank balance: ";
	std::cin >> bankBalance;
	
	std::cout << "Calculating your interest rates...\n";
	for (double moneyCount = bankBalance; moneyCount <= bankBalance; moneyCount = 1.04 * bankBalance) {
		std::cout << "In 5 years you will have " << moneyCount << " dollars\n";
	}
	return 0;
	
	}