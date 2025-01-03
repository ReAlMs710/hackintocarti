// Chris, Ryan, Neil
// 1/3/2025
// Hack Into Carti
// Extra: TBD

#include <iostream>

using namespace std;

int main() {
    string password = "iAmNeverDroppingAgain123";
    string guess;
    cout << "Welcome!" << endl; 
    cout << "Please enter the password: " << endl;
    cin >> guess;
    if(guess == password)
    {
        cout << "Welcome Playboi Carti!" << endl;
        cout << "Would you like to drop music?" << endl;
    }
    else
    {
        cout << "You are not Playboi Carti!" << endl;
    }

}