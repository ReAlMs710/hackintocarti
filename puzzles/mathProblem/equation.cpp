#include <iostream>
#include "equation.h"

int answer;

int equation() {
    std::cout << "What is 808 - 24?" << std::endl;
    std::cin >> answer;
    if (answer == 784) {
        std::cout << "Correct, only carti would know that" << std::endl;
    }
    else {
        std::cout << "You are not Playboi Carti!" << std::endl;
        return 0;
    }
}