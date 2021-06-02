// Copyright (c) Jenoe Balote All rights reserved
//
// Created by: Jenoe Balote
// Created on: June 2021
// This program uses a function by reference

#include <iostream>
#include <string>
#include <cmath>

void RoundingNumber(float &number, int &decimal) {
    // Changes rounding by reference

    // Process and output
    number = number * pow(10, decimal) + 0.5;
    // I learned to convert a floating point number to an integer using:
    // https://en.cppreference.com/w/cpp/language/static_cast
    number = static_cast<int>(number);
    number = number * pow(10, (-1 * decimal));
}


main() {
    // This function calls CalculateVolume

    // Declaring variables
    std::string numberInput;
    std::string decimalInput;
    float numberFloat;
    int decimalsInteger;

    // Input
    std::cout << "Welcome!" << std::endl;
    std::cout << "Enter a number to round: ";
    std::cin >> numberInput;
    std::cout << "Enter how many decimal places to round to: ";
    std::cin >> decimalInput;

    // Process and Output
    try {
        numberFloat = std::stof(numberInput);
        decimalsInteger = stoi(decimalInput);
        if (decimalsInteger >= 0) {
            // Call RoundNumber
            RoundingNumber(numberFloat, decimalsInteger);
            std::cout << "The rounded number is: " << numberFloat << std::endl;
        } else {
            std::cout << "Invalid." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid." << std::endl;
    }
    std::cout << "\nThanks for participating!" << std::endl;
}