#include <iostream>
#include <cmath>
#include "equation.h"
#include "D:\Coding\C++\hackintocarti\puzzles\gameOver\gameOver.h"

using namespace std;

int answer;


void equation() {
    string buffer;
    std::cout << "What is |24 - 808|?" << std::endl;
    std::cin >> answer;

    if (answer == abs(24 - 808)) {
        std::cout << "Correct, only carti would know that" << std::endl;
        cout << "Type anything to continue\n";
        cin >> buffer;
        system("cls");
    }
    else {
        gameOver();
    }
}