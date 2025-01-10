#include <iostream>
#include <ctime>
#include <string>
#include "guessLetter.h"
#include "D:\Coding\C++\hackintocarti\puzzles\gameOver\gameOver.h"

using namespace std;

string dayOfTheWeek() {
    time_t day = time(0);
    tm *ltm = localtime(&day);

    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    return days[ltm->tm_wday];
}

void guessLetter() {
    string buffer; 
    string currentDay = dayOfTheWeek();
    char correctLetter = currentDay[0];
    char userInput;

    cout << "I think that Carti's extra login changes depending on the day!" << endl;
    cout << "Type anything to continue\n";
    cin >> buffer;
    system("cls");
    cout << "What letter does the current day start with? " << endl;
    cin >> userInput;

    userInput = toupper(userInput);
    correctLetter = toupper(correctLetter);

    if (userInput == correctLetter) {
        cout << "WOW! YOU GOT IT CORRECT!" << endl;
        cout << "Type anything to continue\n";
        cin >> buffer;
        system("cls");
    }
    else {
        gameOver();
    }
}