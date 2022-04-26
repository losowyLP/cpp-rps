#include <iostream>
#include <vector>
#include <time.h>

int main() {
	srand(time(0));
	
	std::string sUserIn;
	std::vector<std::string> vChoices = {"rock", "paper", "scissors"};
	std::string sBot = vChoices[rand() % 3 + 1];

	std::cout << "Rock, paper, scissors, shoot! ";
	std::cin >> sUserIn;

	if (sBot == sUserIn) {
		std::cout << "It's a tie!\n";
	} else if (sBot == "rock") {
		if (sUserIn == "paper") {
			std::cout << "You win!\n";
		} else if (sUserIn == "scissors") {
			std::cout << "You lose!\n";
		}
	} else if (sBot == "paper") {
		if (sUserIn == "rock") {
			std::cout << "You lose!\n";
		} else if (sUserIn == "scissors") {
			std::cout << "You win!\n";
		}
	} else if (sBot == "scissors") {
		if (sUserIn == "rock") {
			std::cout << "You win!\n";
		} else if (sUserIn == "paper") {
			std::cout << "You lose!\n";
		}
	}

	std::cout << "Thank's for playing!\n\n - losowy\n";
	std::cin.get();

	return 0;
}