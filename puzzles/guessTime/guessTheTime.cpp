#include "guessTheTime.h"
#include <iostream>
#include <ctime>

using namespace std;

void printCurrentTime() {
    time_t now = time(nullptr);

    int utcOffsetHours = 0;

    now += utcOffsetHours * 3600;

    tm* timeZoneTime = gmtime(&now);

    cout << "Current time in Britain is: " << asctime(timeZoneTime);
    
}


