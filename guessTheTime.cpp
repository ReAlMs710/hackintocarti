// Guess the current time in london (we will drop the album at that time)
#include <iostream>
#include <ctime>

int main() {
    std::time_t now = std::time(nullptr);

    int utcOffsetHours = 0;

    now += utcOffsetHours * 3600;

    std::tm* timeZoneTime = std::gmtime(&now);

    std::cout << "Current time in Britain is: " << std::asctime(timeZoneTime);

    return 0;
}