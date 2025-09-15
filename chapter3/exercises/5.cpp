// including all from getgo coz cba to be be specific and idc for small programmes
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {

    int userNumber = 0;

    cout << "Think of a number between 1 and 100, I'll guess it in < 7 attempts."
        << "\nStart by entering your number:\n";

    cin >> userNumber;

    char guessConfirmation = ' ';
    int computerGuess = 50;

    int guessingInt = computerGuess / 2;

    while(computerGuess != userNumber) {
        cout << "\nIs your number less than " << computerGuess << "? Enter 'y' for yes and  'n' for no\n";
        cin >> guessConfirmation;
        if(guessConfirmation == 'n') {
            computerGuess += guessingInt;
        }else if(guessConfirmation == 'y'){
            computerGuess -= guessingInt;
        }else {
            cout << "\nfk off with your incorrect input, now you will have to start again\n";
            return 0;
        }
        guessingInt /= 2;                               
    }

    cout << "Your number is " << computerGuess << '\n';

    return 0;
}