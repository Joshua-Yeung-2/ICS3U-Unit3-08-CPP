// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is to identify if the year is a leap year.

#include <iostream>
#include <string>

int main() {
    // this function is to identify if the year is a leap year.
    int yearInput;
    std::string yearInputStr;

    // input
    std::cout << "Enter a year here: ";
    std::cin >> yearInputStr;
    std::cout << "" << std::endl;

    try {
        yearInput = std::stoi(yearInputStr);
        if (yearInput % 4 != 0) {
            if (yearInput % 100 != 0) {
                if (yearInput % 400 != 0) {
                    std::cout << "it is a common year";
                } else {
                    std::cout << "it is a leap year";
                }
            } else {
                std::cout << "it is a common year";
            }
        } else {
                std::cout << "it is a leap year";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
    }

    std::cout << "\nDone" << std::endl;
}
