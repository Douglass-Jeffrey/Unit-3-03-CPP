// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: oct 2019
// This program runs teh secret number game in C++

#include <iostream>

int main() {
    // this function checks user inputted number = SECRETNUMBER
    const int SECRETNUMBER = 5;
    int usernumber;

    // input
    std::cout << "Enter a number: ";
    std::cin >> usernumber;
    std::cout << "" << std::endl;

    // process
    if (usernumber == SECRETNUMBER) {
        // output
        std::cout << "You got the right answer!!!";
    } else {
        std::cout << "You got the wrong answer, try again.";
    }
}
