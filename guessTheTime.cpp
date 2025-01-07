// Guess the current time in london (we will drop the album at that time)
#include <iostream>
#include <ctime>

int main() {
    std::time_t now = std::time(nullptr);

    int utcOffsetHours = 0;

    now += utcOffsetHours * 3600;

    std::tm* timeZoneTime = std::gmtime(&now);

    int britishHour = timeZoneTime->tm_hour;

    std::cout << "What is the current hour in britain (0 - 24)" << std::endl;
    int hour;
    std::cin >> hour;

    if(hour == britishHour) {
        std::cout << "CORRECT!";
    }
    else {
        std::cout << "INCORRECT!";
    }

    return 0;
}