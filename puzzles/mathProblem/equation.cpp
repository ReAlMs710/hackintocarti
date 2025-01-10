#include <iostream>
#include <cmath>
#include "equation.h"

int answer;

void equation() {
    std::cout << "What is |24 - 808|?" << std::endl;
    std::cin >> answer;
    if (answer == abs(24 - 808)) {
        std::cout << "Correct, only carti would know that" << std::endl;
    }
    else {
        std::cout << "You are not Playboi Carti!" << std::endl;
    }
}