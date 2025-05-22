// Copyright 2025 Xiaohan
// Created by Xiaohan
// Created on May 19, 2025
// This program finds the equation of a line

#include <iostream>
#include <string>

// A function to calculate the slope and y-intercept of a line given two points
void calculateLine() {
    // Declare variables for user input
    std::string x1Str, y1Str, x2Str, y2Str;

    // Ask the user for coordinates
    std::cout << "Enter the x1 coordinate: ";
    std::cin >> x1Str;
    std::cout << "Enter the y1 coordinate: ";
    std::cin >> y1Str;
    std::cout << "Enter the x2 coordinate: ";
    std::cin >> x2Str;
    std::cout << "Enter the y2 coordinate: ";
    std::cin >> y2Str;

    // Try casting the strings to floats
    try {
        float x1 = std::stof(x1Str);
        float y1 = std::stof(y1Str);
        float x2 = std::stof(x2Str);
        float y2 = std::stof(y2Str);

        // Check if the x values are the same
        if (x1 == x2) {
            std::cout << "The x-coordinates cannot be the same. "
                      << "This would be a vertical line with undefined slope."
                      << std::endl;
            return;
        }

        // Calculate the slope and y-intercept
        float m = (y2 - y1) / (x2 - x1);
        float b = y1 - m * x1;

        // Display the result
        std::cout << "The equation of the line is: y = "
                  << m << "x + " << b << std::endl;

    } catch (const std::invalid_argument& e) {
        std::cout << "Invalid input. Please enter numeric values." << std::endl;
    }
}

// The main function
int main() {
    std::string tryAgain;

    // Welcome message
    std::cout << "Hello! Welcome to this program!" << std::endl;

    // Repeat loop
    while (true) {
        // Call the line calculation function
        calculateLine();

        // Ask the user if they want to continue
        std::cout << "Do you want to try another round? (yes/no): ";
        std::cin >> tryAgain;

        // Break if user doesn't want to continue
        if (tryAgain != "yes" && tryAgain != "Yes") {
            break;
        }
    }

    // Goodbye message
    std::cout << "Thanks for using the program!" << std::endl;
}

