// Copyright 2025 Xiaohan
// Created by Xiaohan
// Created on May 19, 2025
// This program finds the equation of a line

#include <iostream>
#include <string>

// A function to calculate the slope and y-intercept of a line given two points
// parameters: x1, y1, x2, y2
void calculateLine(float x1, float y1, float x2, float y2) {
    // Check if the points in x are the same
    if (x1 == x2) {
        // If true, print x can not be the same
        std::cout << "The x-coordinates cannot be the same. "
        << std::endl;
        // Return the function
        return;
    }
    // Calculate the slope (m) and y-intercept (b) of the line
    float m = (y2 - y1) / (x2 - x1);
    float b = y1 - m * x1;
    // Display the result to the user
    std::cout << "The equation of the line is: y = "
    << m << "x + " << b << std::endl;
}

// The main function
int main() {
    // Declare variables
    std::string x1Str, y1Str, x2Str, y2Str, tryAgain;
    // Print a welcome message
    std::cout << "Hello! Welcome to this program!" << std::endl;

    // while the loop is true
    while (true) {
        // Ask the user for input of x1
        std::cout << "Enter the x1 coordinate: ";
        // Store the input in a string
        std::cin >> x1Str;
        // Ask the user for input of y1
        std::cout << "Enter the y1 coordinate: ";
        // Store the input in a string
        std::cin >> y1Str;
        // Ask the user for input of x2
        std::cout << "Enter the x2 coordinate: ";
        // Store the input in a string
        std::cin >> x2Str;
        // Ask the user for input of y2
        std::cout << "Enter the y2 coordinate: ";
        // Store the input in a string
        std::cin >> y2Str;

        // Try casting the strings to floats
        try {
            // Try casting the strings to floats of x1
            float x1 = std::stof(x1Str);
            // Try casting the strings to floats of y1
            float y1 = std::stof(y1Str);
            // Try casting the strings to floats of x2
            float x2 = std::stof(x2Str);
            // Try casting the strings to floats of y2
            float y2 = std::stof(y2Str);
            // Call the function
            calculateLine(x1, y1, x2, y2);
        // The exception for the try catch
        } catch (const std::invalid_argument& e) {
            // If the input is invalid, print an error message
            std::cout << "Invalid input. Please enter numeric values."
            << std::endl;
            // Continue to the next function of the loop
            continue;
        }
        // Ask the user if they want to try again
        std::cout << "Do you want to try another round? (yes/no): ";
        // Store the input in a string
        std::cin >> tryAgain;
        // If the user do not enter yes
        if (tryAgain != "yes" && tryAgain != "Yes") {
            // break the loop
            break;
        }
    }
    // Print a Thank you message
    std::cout << "Thanks for using the program!"
    << std::endl;
}

