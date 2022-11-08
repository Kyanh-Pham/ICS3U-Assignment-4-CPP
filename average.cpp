// Copyright (c) 2022 Kyanh Pham
//
// Created by: Kyanh Pham
// Created on: Oct 2022
// This program finds the average of 3 numbers between 0-100

#include <iostream>
#include <string>

    int integer1;
    int integer2;
    int integer3;
    float addInt;
    std::string string1;
    std::string string2;
    std::string string3;

int main() {
    // Input

    std::cout << "Enter in your first integer between 0-100: ";
    std::cin >> string1;
    std::cout << "Enter in your second integer between 0-100: ";
    std::cin >> string2;
    std::cout << "Enter in your third integer between 0-100: ";
    std::cin >> string3;
    std::cout << std::endl;

    // Process and output
    try {
        integer1 = std::stoi(string1);
        integer2 = std::stoi(string2);
        integer3 = std::stoi(string3);
        if (integer1 >= 0 && integer2 >= 0 && integer3 >= 0) {
            if (integer1 <= 100 && integer2 <= 100 && integer3 <= 100) {
                addInt = integer1 + integer2 + integer3;
                addInt = addInt / 3;
            std::cout << "The average of " << integer1 << ", " << integer2
             << ", and " << integer3 << " is " << addInt << "" << std::endl;
            } else {
                std::cout
                 << "One or more of your numbers are higher than 100, try again"
                  << std::endl;
            }
        } else {
            std::cout
             << "One or more of your numbers are less than 0, try again"
              << std::endl;
        }
    } catch (std::invalid_argument) {
         std::cout
          << "Invalid input, please input an integer between 0-100."
           << std::endl;
    }

    std::cout << "\nDone.";
}
