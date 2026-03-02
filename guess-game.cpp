#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // Seed for random number
    int difficulty;
    int maxNumber;
    char playAgain;

    cout << "=============================\n";
    cout << "   NUMBER GUESSING GAME\n";
    cout << "=============================\n\n";

    do {
        cout << "Select Difficulty Level:\n";
        cout << "1. Easy (1 - 50)\n";
        cout << "2. Medium (1 - 100)\n";
        cout << "3. Hard (1 - 500)\n";
        cout << "Enter choice: ";
        cin >> difficulty;

        switch(difficulty) {
            case 1: maxNumber = 50; break;
            case 2: maxNumber = 100; break;
            case 3: maxNumber = 500; break;
            default:
                cout << "Invalid choice! Setting to Medium.\n";
                maxNumber = 100;
        }

        int secretNumber = rand() % maxNumber + 1;
        int guess;
        int attempts = 0;

        cout << "\nI have selected a number between 1 and " << maxNumber << ".\n";

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > secretNumber)
                cout << "Too High!\n";
            else if (guess < secretNumber)
                cout << "Too Low!\n";
            else
                cout << "\n🎉 Correct! You guessed in " << attempts << " attempts.\n";

        } while (guess != secretNumber);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThank you for playing! 🚀\n";
    return 0;
}
