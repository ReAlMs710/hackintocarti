// Chris, Ryan, Neil
// 1/3/2025
// Hack Into Carti
// Extra: Files are seperated, colored text, clean screen, writing files, arrays, header files, OOB everything, console errors instead of just printing, release build comes with an easy .exe file rather than compiling on the spot

// main.cpp
#include <iostream>
#include <windows.h>
#include <cctype>
#include "puzzles/guessTime/guessTheTime.h"
#include "puzzles/findCode/findCode.h"
#include "puzzles/guessLetter/guessLetter.h"
#include "puzzles/mathProblem/equation.h"
#include "puzzles/endGame/endGame.h"
#include "D:\Coding\C++\hackintocarti\puzzles\gameOver\gameOver.h"

using namespace std;

int main() {
    char decision;
    cout << "WE NEED TO HACK INTO CARTI!!" << endl;
    cout << "Will you help us? (y/n)" << endl;
    cin >> decision;
    decision = tolower(decision);

    if (decision == 'y') {
        system("cls");
        loginCodeLogic();
        guessTheTime();
        guessLetter();
        equation();
        endGame();
    }

    else {
        return 0;
    }

}
