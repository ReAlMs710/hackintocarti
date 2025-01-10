// Guess the current time in london (we will drop the album at that time)
#include <iostream>
#include <ctime>
#include "D:\Coding\C++\hackintocarti\puzzles\gameOver\gameOver.h"

using namespace std;

//note to chris: i dont even want to see what you did to this code, but
//it was formatted TERRIBLY. i had to fix it because g++ was giving me an
//error when compiling it - neil

int guessTheTime() {
    string buffer;

    std::time_t now = std::time(nullptr); // create a time object for right now

    int utcOffsetHours = 0; // offset is 0 for britain

    now += utcOffsetHours * 3600; // 60 min x 60 sec

    std::tm *timeZoneTime = std::gmtime(&now); // get time

    int britishHour = timeZoneTime->tm_hour; // gets the current hour in Britain

    std::cout << "What is the current hour in britain (Answer in military/24 hour time. EX: 5, 13, ETC)" << std::endl;
    int hour;         // the users response
    std::cin >> hour; // store user response

    if (hour == britishHour) {
        std::cout << "CORRECT!\n"; // if you get it right
        cout << "Type anything to continue\n";
        std::cin >> buffer; 
        system("cls");

    }
    else {
        gameOver();
    }
}