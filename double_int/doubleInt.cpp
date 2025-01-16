// doubleInt.cpp
// CIT 66 Spring 2025
// Created by Mark Edmunds
// Created on 1-15-25
// The program takes a given integer and doubles it.

#include <iostream>

int main() {
    int num;
    // prompt for number
    std::cout << "Enter a nuber to double:" << std::endl;
    // read input
    std::cin >> num;
    // send num * 2 to standard out
    std::cout << "Your number doubled is: " << 2 * num << std::endl;
    return 0;
}