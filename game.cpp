#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Step 1: Create a random number
    srand(time(0));  // seed the random number generator with current time
    int secretNumber = rand() % 100 + 1;  // generates number between 1 and 100

    int guess;
    int tries = 0;

    cout << "🎮 Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    // Step 2: Keep asking until the correct number is guessed
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;  // count the number of tries

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "🎉 Congratulations! You guessed the number in " << tries << " tries." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
