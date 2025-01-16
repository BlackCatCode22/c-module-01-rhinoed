// simpleGreeting.cpp
// CIT 66 Spring 2025
// Created by Mark Edmunds
// Created on 1-15-25
// The program provides a simple greeting to a given user



#include <iostream>
#include <string>
using namespace std;

int main() {
    // create character array
    string name;
    // create salutation
    const string salutation = "Hello";
    // prompt for name
    cout << "What is your name?:" << endl;
    // read standard in and set name
    cin >> name;
    // crate greeting
    const string greeting = salutation + " " + name + ", " + "welcome to the world of C++";
    // output to standard out
    cout << greeting << endl;
    return 0;
}