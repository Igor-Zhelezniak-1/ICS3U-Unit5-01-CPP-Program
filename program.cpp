// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program is program

#include <iostream>

void degrees() {
    // This is function to transform °C to °F

    std::string integer;
    float number;
    float answer;

    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> integer;

    // process
    try {
        number = std::stof(integer);
        answer = 1.8 * number + 32;
        std::cout << number << "°C is equal to " << answer << "°F" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "This was not a number" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}


main() {
    // this function just calls other functions

    // call functions
    degrees();
}
