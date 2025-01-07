// Guess the random number
#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
int main() {
    /* initialize random seed: */
    srand (time(NULL));

    cout << "How many songs will be on the album?" << endl;
    cout << "Guess the number between 10 - 30" << endl;
    int tries = 0;
    int guess = 0;
    int songs = rand() % 30 + 10;
    do {
        if(tries > 0 && guess < songs) {
            cout << "Guess a higher number" << endl;
        }
        if(tries > 0 && guess > songs) {
            cout << "Guess a lower number" << endl;
        }
        // Tell them how many tries after first try
        if(tries > 0) {
          cout << "This is your " << tries << " attempt" << endl;   
        }
        cout << "Please enter your guess" << endl;
        cin >> guess;
        tries += 1;
    } while(guess != songs); // condition after loop
    cout << "CORRECT! There are " << songs << " songs on the album which took you " << tries << " tries to guess!" << endl;
}