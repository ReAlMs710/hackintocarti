#include <iostream>
#include <ctime>
#include <string>

using namespace std;

string dayOfTheWeek() {
    time_t day = time(0);
    tm *ltm = localtime(&day);

    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    return days[ltm->tm_wday];
}

int main() {
    string buffer; 
    string currentDay = dayOfTheWeek();
    char correctLetter = currentDay[0];
    char userInput;

    userInput = toupper(userInput);
    correctLetter = toupper(correctLetter);

    while (true) {
        cout << "I think that Carti's extra login changes depending on the day!" << endl;
        cin >> buffer;
        cout << "What letter does the current day start with? " << endl;
        cin >> userInput;

        userInput = toupper(userInput);
        correctLetter = toupper(correctLetter);

        if (userInput == correctLetter) {
            cout << "WOW! YOU GOT IT CORRECT!" << endl;
            break;
        }
        else {
            cout << "not quite. try again maybe. (type anything to continue)" << endl;
            cin >> buffer;
        }
    }
}