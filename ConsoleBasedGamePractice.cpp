// ======================================= GUESSING NUMBER =======================================
/*
#include <iostream> // INPUT AND OUTPUT 
#include <limits> // TO HAVE SAFETY INPUT WITH cin.clear and cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
#include <cstdlib> // for RAND 
#include <ctime> // returns time but use chrono in modern c++

using std::cout;
using std::cin;

int getMaxNumber(int difficulty) {
    if (difficulty == 1) {
        return 10;
    }
    else if (difficulty == 2) {
        return 50;
    }
    else {
        return 100;
    }
}

void playGame(int maxNumber) {
    int randomNumber = rand() % maxNumber + 1;
    int guess;
    int attempts = 0;

    cout << "\nI'm thinking of a number between 1 and " << maxNumber << ".\n";

    do {
        cout << "Enter your guess: ";

        while (!(cin >> guess)) {
            cout << "Invalid input! Enter a number: ";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        attempts++;

        if (guess > randomNumber) {
            cout << "Too High!\n";
        }
        else if (guess < randomNumber) {
            cout << "Too Low!\n";
        }
        else {
            cout << "\nCorrect! 🎉\n";
            cout << "You guessed the number in "
                 << attempts << " attempts.\n";
        }

    } while (guess != randomNumber);
}

int main() {
    srand(time(0)); // RANDOM SEED 

    int difficulty;

    cout << "===== NUMBER GUESSING GAME =====\n";
    cout << "Choose Difficulty:\n";
    cout << "1. Easy (1-10)\n";
    cout << "2. Medium (1-50)\n";
    cout << "3. Hard (1-100)\n";
    cout << "Enter choice: ";

    while (!(cin >> difficulty) ||
           difficulty < 1 || difficulty > 3) {

        cout << "Invalid input! Enter 1, 2, or 3: ";

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    int maxNumber = getMaxNumber(difficulty);

    playGame(maxNumber);

    cout << "\nThanks for playing!\n";

    return 0;
}
*/