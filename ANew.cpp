#include <iostream>
#include <cstdlib> // For srand() and rand()
#include <ctime>   // For time()
using namespace std;
int main() {
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Generate random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess = 0;  // Variable to store user's guess
    int attempts = 0;  // Counter for attempts

    cout << "Welcome to the Guess the Number Game!" <<endl;
    cout << "I have chosen a number between 1 and 100." <<endl;
    cout << "Can you guess what it is?" << endl;

    // Loop until the user guesses the correct number
    while (guess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." <<endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        }
    }

    return 0;
}

