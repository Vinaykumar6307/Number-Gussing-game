#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    int guessed;
    int no_of_guesses = 0;

    // Start the guessing game
    do {
        cout << "Guess your number between 1 to 100: ";
        cin >> guessed;

        if (guessed < randomNumber) {
            cout << "Enter a higher number please." << endl;
        } else if (guessed > randomNumber) {
            cout << "Enter a lower number please." << endl;
        } else {
            cout << "Congratulations!" << endl;
        }

        no_of_guesses++;
    } while (guessed != randomNumber);

    // Print the number of guesses taken
    cout << "You guessed the number in " << no_of_guesses << " attempts." << endl;

    return 0;
}