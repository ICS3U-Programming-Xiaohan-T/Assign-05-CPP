// Copyright 2025 Xiaohan
// Created by Xiaohan
// Created on May 19, 2025
// This program finds the equation of a line

#include <iostream>
#include <string>

void calculateLine(float x1, float y1, float x2, float y2) {
    if (x1 == x2) {
        std::cout << "The x-coordinates are the same. The line is vertical (undefined slope)." << std::endl;
        return;
    }

    float m = (y2 - y1) / (x2 - x1);
    float b = y1 - m * x1;

    std::cout << "The equation of the line is: y = " << m << "x + " << b << std::endl;
}

int main() {
    std::string x1Str, y1Str, x2Str, y2Str, tryAgain;

    std::cout << "Hello! Welcome to this program!" << std::endl;

    while (true) {
        std::cout << "\nEnter the x1 coordinate: ";
        std::cin >> x1Str;
        std::cout << "Enter the y1 coordinate: ";
        std::cin >> y1Str;
        std::cout << "Enter the x2 coordinate: ";
        std::cin >> x2Str;
        std::cout << "Enter the y2 coordinate: ";
        std::cin >> y2Str;

        try {
            float x1 = std::stof(x1Str);
            float y1 = std::stof(y1Str);
            float x2 = std::stof(x2Str);
            float y2 = std::stof(y2Str);

            calculateLine(x1, y1, x2, y2);

        } catch (const std::invalid_argument& e) {
            std::cout << "Invalid input. Please enter numeric values." << std::endl;
            continue;
        }

        std::cout << "Do you want to try another round? (yes/no): ";
        std::cin >> tryAgain;

        if (tryAgain != "yes" && tryAgain != "Yes") {
            break;
        }
    }

    std::cout << "Thanks for using the program!" << std::endl;
    return 0;
}