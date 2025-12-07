/*
#include <iostream>

int main() {
	
	bool accountType;
	std::cout << "Please enter your account type (0 for Savings, 1 for Checking) \n";
	std::cin >> accountType;
	
	if (accountType == 0) {
		std::cout << "You have a Savings account \n" << "Your interest rates are 4.8% \n";
		
		int years;
		std::cout << "Please enter how many years you would like us to calculate: \n";
		std::cin >> years;

		double bankBalance;
		std::cout << "Please enter your bank balance: \n";
		std::cin >> bankBalance;

		std::cout << "Calculating your future balances...\n";
		for (int i = 1; i <= years; i ++) {
			bankBalance = 1.048 * bankBalance;
			std::cout << "In " << i << " years you will have: " << bankBalance << "\n";
		}
	} else if (accountType == 1) {
		std::cout << "You have a Checking account \n" << "Your interest rates are 0.08% \n";

		int years;
		std::cout << "Please enter how many years you would like us to calculate: \n";
		std::cin >> years;

		double bankBalance;
		std::cout << "Please enter your bank balance: \n";
		std::cin >> bankBalance;

		std::cout << "Calculating your future balances...\n";
		for (int i = 1; i <= years; i++) {
			bankBalance = 1.0008 * bankBalance;
			std::cout << "In " << i << " years you will have: " << bankBalance << "\n";
		}
	}
	return 0;
}
*/