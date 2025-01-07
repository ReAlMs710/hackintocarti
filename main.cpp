// Chris, Ryan, Neil
// 1/3/2025
// Hack Into Carti
// Extra: TBD

#include <iostream>
#include <cctype>

using namespace std;

void program();

int main()
{
    string guess;
    string password;
    cout << "Welcome!" << endl;
    cout << "Please enter the password: " << endl;
    cin >> guess;
    for(int i = 0; i < guess.length(); i++)
    {
        password[i] = tolower(guess[i]);
    }
    if (guess == "password")
    {
        cout << "Welcome Playboi Carti!" << endl;
        cout << "Would you like to drop music? y/n" << endl;
        string answer;
        cin >> answer;
        if (answer == "y")
        {
            cout << "You are not Playboi Carti!" << endl;
        }
        else
        {
            cout << "Welcome Playboi Carti!" << endl;
            program();
        }
    }
    else
    {
        cout << "You are not Playboi Carti!" << endl;
    }
}

void program()
{
    cout << "Welcome real Playboi Carti!" << endl;
}