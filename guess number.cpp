#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Guess the number (1 to 100): " << endl;
    
    while (userGuess != randomNumber) {
        // Get user guess
        cin >> userGuess;

        // Provide feedback
        if (userGuess < randomNumber) {
            cout << "Too low! Try again: " << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again: " << endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
        }
    }

    return 0;
}

