
//#include "pch.h" A windows console library
#include <iostream>
#include <string>
#include <ciso646>
#include <cstdlib>
#include <ctime>

using namespace std;

class the_game {
private:
	int number;
	int count;
	int randomNumber;
	string name;
	int answer;
	int proceed;
	int choice;
public:
	the_game() {}
	~the_game() {}
	void guess();
	void getRandomNumber();
	void Playername();
	void retry() {
		play();
	}
	void getAnswer() {
		cout << "would you like to try again or quit the game(1 / 2) ? " << endl;
		cout << "======================================================" << endl;
		cin >> answer;
		cin.ignore();
		switch (answer) {
		case 1:
			cout << "\n\n==============================" << endl;
			cout << "Good luck on another trial!" << endl;
			cout << "==================================" << endl;
			//goto retry;
			retry();
			break;
		case 2: cout << "Thanks " << name << " for Playing.\n See you next time." << endl;
    proceed = 0;
			break;
		}
	}
	void comparison() {
		if (choice > number) {
			cout << "\nWrong. The correct number is lower than " << choice << " .\n Guess again." << endl;
		}
		else {
			cout << "\nWrong. The correct number is greater than " << choice << " .\n Guess again." << endl;
		}
	}
	void play() {
		count = 1;
		proceed = 1;
		randomNumber = rand();
		number = (randomNumber % 100) + 1;
		while (proceed == 1) {
			cout << "Guess a number between 1 & 100 : " << endl;
			cin >> choice;
			if (choice == number) {
				bestPlay(choice);
				SecondBest(choice);
				ThirdBest(choice);
				theRest(choice);
			}
			else {
				comparison();
			}
			count++;
			//proceed = 1;
		}
	}
	int bestPlay(int choice) {
				if (count == 1) {
					cout << "\n\n======================================================" << endl;
					cout << "BRAVO " << name << "! you made it in " << count << " guesses" << endl;
					getAnswer();
				}
				return count;
		}
	int SecondBest(int choice) {
		if (count > 1 && count <= 5) {
			cout << "\n\n======================================================" << endl;
			cout << "Well done " << name << ", you made it in " << count << " guesses" << endl;
			getAnswer();
		}
		return count;
	}
	int ThirdBest(int choice) {
		if (count > 5 && count <= 10) {

			cout << "\n\n======================================================" << endl;
			cout << "Well tried " << name << ", you made it in " << count << " guesses" << endl;
			getAnswer();
		}
		return count;
	}
	int theRest(int choice) {
			if (count > 10 && count < 100) {
				{
					cout << "\n\n=======================================================================================================================" << endl;
					cout << "You made it in " << count << " guesses .But you could do better, would you like to try again or quit the game( 1/2 )?" << endl;
					cout << "=======================================================================================================================" << endl;
					getAnswer();
				}
			}
			return count;
	}
};

void the_game::Playername(){
	cout << "Enter your name: " << endl;
	getline(cin, name);
	cout << "Welcome, " << name << ". Enjoy the game.\n" << endl;
}
void the_game::getRandomNumber() {
	srand(static_cast <unsigned int> (time(0)));
}
void the_game::guess() {
	count = 1;
	proceed = 1;
	randomNumber = rand();
	number = (randomNumber % 100) + 1;
	play();
}
int main() {
	the_game print;
	the_game game;
	print.Playername();
	game.getRandomNumber();
	game.guess();
	return 0;
}
