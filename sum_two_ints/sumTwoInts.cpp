// sumTwoInts.cpp
// CIT 66 Spring 2025
// Created by Mark Edmunds
// Created on 1-15-2025
// The program adds two given integers together


#include <iostream>

int main() {
    // create variables
    int num1;
    int num2;
    // prompt for input
    std::cout << "Enter first number:" << std::endl;
    // read from standard in set num1
    std::cin >> num1;
    // prompt for second input
    std::cout << "Enter second number:" << std::endl;
    // read from standard in set num 2
    std::cin >> num2;
    // output sum
    std::cout << "The sum of the numbers is: " << num1 + num2 << std::endl;

    return 0;
}