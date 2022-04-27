#include <iostream>
#include <vector>
#include <time.h>
#include <string>

int main() {	
	int iScore;
	std::string sPlayAgain;
	std::string sUserIn;
	std::vector<std::string> vChoices;

	sPlayAgain = "y";
	iScore = 0;
	vChoices = {"rock", "paper", "scissors"};

	while (sPlayAgain.rfind("y", 0) || sPlayAgain.rfind("Y", 0)) {
		srand(time(0));
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

		iScore++;

		std::cout << "Play again? (y/n)\n";
		std::cin >> sPlayAgain;
	}

	std::cout << "Thank's for playing!\nYou won " << iScore << " times.\n\n - losowy\n";
	std::cin.get();

	return 0;
}