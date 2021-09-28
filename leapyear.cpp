// Copyright [2021] Rohnin Barrette"  [legal/copyright]

// Created by: Rohnin Barrette
// Created on: Sept 2021
// This functiontells the user if the inputted year is a leap year or not.

#include <iostream>

int main() {
    // This functiontells the user if the
    // inputted year is a leap year or not.
    std::string year_string;
    int year_number;

    // input
    std::cout << "Enter the year: ";
    std::cin >> year_string;
    std::cout << "" << std::endl;

    // process and output
    try {
        year_number = std::stoi(year_string);
        if (year_number % 4 == 0) {
            std::cout << year_number << " is a leap year.";
        } else {
            if (year_number % 100 == 0) {
                std::cout << year_number << " is a leap year.";
            } else {
                if (year_number % 400 == 0) {
                    std::cout << year_number << " is a leap year.";
                } else {
                    std::cout << year_number << " is not a leap year.";
                }
            }
        }
    } catch (std::invalid_argument) {
        std::cout << year_string << " Is not a valid input";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
