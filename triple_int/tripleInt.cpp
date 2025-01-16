// tripleInt.cpp
// CIT 66 Spring 2025
// Created by Mark Edmunds
// Created on 1-15-25
// program takes a given integer and triples it.

#include <iostream>

int main() {
    int num;
    // prompt for number
    std::cout << "Enter a nuber to triple:" << std::endl;
    // read input
    std::cin >> num;
    // send num * 2 to standard out
    std::cout << "Your number tripled is: " << 3 * num << std::endl;
    return 0;
}