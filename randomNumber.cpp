// Guess the random number
#include <iostream>
#include <stdio.h>
#include <cstdlib>

int main() {
    /* initialize random seed: */
    srand (time(NULL));

    std::cout << "How many songs will be on the album?" << std::endl;
    std::cout << "Guess the number between 10 - 30" << std::endl;
    int tries = 0;
    int guess = 0;
    int songs = rand() % 30 + 10;
    do {
        if(tries > 0 && guess < songs) {
            std::cout << "Guess a higher number" << std::endl;
        }
        if(tries > 0 && guess > songs) {
            std::cout << "Guess a lower number" << std::endl;
        }
        // Tell them how many tries after first try
        if(tries > 0) {
          std::cout << "This is your " << tries << " attempt" << std::endl;   
        }
        std::cout << "Please enter your guess" << std::endl;
        std::cin >> guess;
        tries += 1;
    } while(guess != songs); // condition after loop
    std::cout << "CORRECT! There are " << songs << " songs on the album which took you " << tries << " tries to guess!" << std::endl;
}