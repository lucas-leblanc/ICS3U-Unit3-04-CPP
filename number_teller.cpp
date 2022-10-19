// Copyright(c) 2022 Lucas LeBlanc All rights reserved.
//
// Created by : Lucas LeBlanc
// Created on : Oct 2022
// ICS3U-Unit3-04.cpp File,
// learning if...then...elseif...else... statements in C++.

#include <iostream>

int main() {
    // creating variables
    int inputNumber;

    // input
    std::cout << "Input the integer: ";
    std::cin >> inputNumber;

    // process and output
    if (inputNumber > 0) {
        std::cout << "\nThe number " << inputNumber << " is positive.";
    } else if (inputNumber < 0) {
        std::cout << "\nThe number " << inputNumber << " is negative.";
    } else {
        std::cout << "\nThe number " << inputNumber
                  << " is neutral, it's a zero.";
    }

    std::cout << "\n\n\nDone.\n";
}
