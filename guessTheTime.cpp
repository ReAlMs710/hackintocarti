// Guess the current time in london (we will drop the album at that time)
#include <iostream>
#include <ctime>

int main() {
    std::time_t now = std::time(nullptr); // create a time object for rightn ow

    int utcOffsetHours = 0; // offset is 0 for britain

    now += utcOffsetHours * 3600;

    std::tm* timeZoneTime = std::gmtime(&now);

    int britishHour = timeZoneTime->tm_hour; // gets the current hour in Britain

    std::cout << "What is the current hour in britain (0 - 24)" << std::endl;
    int hour;
    std::cin >> hour;

    if(hour == britishHour) {
        std::cout << "CORRECT!"; // if you get it right
    }
    else {
        std::cout << "INCORRECT!"; // if you get it wrong
    }

    return 0;
}