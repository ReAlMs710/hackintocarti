#include <iostream>
#include <fstream>
#include <cstdlib> //for getenv()
#include <ctime>
#include "findCode.h" 

using namespace std;

int randNum(); 

int randNum() {
    srand(static_cast<unsigned>(time(0)));
    return 1000 + rand() % 9000;
}

void loginCodeLogic() {
    string buffer; 
    int codeGuess;
    int randCode = randNum();
    string homePath = getenv("USERPROFILE");
    string filePath = homePath + "\\Downloads\\thecode.txt";

    ofstream outFile(filePath);

    if (!outFile) {
        cerr << "Something went wrong..." << endl;
    }

    outFile << "The code is ";
    outFile << randCode;  
    outFile.close();

    cout << "\nI think that carti's login code is in the Downloads folder!\n" << endl;
    cout << "Type anything to continue\n";
    cin >> buffer; 

    while (true) {
        cout << "\nWhat is the secret code?\n" << endl;
        cin >> codeGuess; 

        if (codeGuess == randCode) {
            cout << "Correct!\n";
            break;
        }

        else {
            cout << "Wrong!\n";
        }
    }
}

