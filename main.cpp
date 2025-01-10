// Chris, Ryan, Neil
// 1/3/2025
// Hack Into Carti
// Extra: Program can rerun completely, regenerate any of the files from before, and act as if it was ran the first time around, also files are seperated

// main.cpp
#include <iostream>
#include <cctype>
#include "puzzles/guessTime/guessTheTime.h"
#include "puzzles/findCode/findCode.h"

using namespace std;

void getIntro();

int main()
{
    char decision;
    cout << "WE NEED TO HACK INTO CARTI!!" << endl;
    cout << "Will you help us? (y/n)" << endl;
    cin >> decision;
    decision = tolower(decision);

    if (decision == 'y')
    {
        cout << "okay good lets release iammusic" << endl;
        loginCodeLogic();
        guessTheTime();
    }
    else
    {
        return 0;
    }
}
