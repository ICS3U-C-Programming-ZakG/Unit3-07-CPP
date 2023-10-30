// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Oct. 30, 2023
// This program checks the user inputted age and will tell them
// if they can date their grandchild using AND and OR.

#include <iostream>
#include <string>

int main() {
    // introduce program to user
    std::cout << "This program gets the users age and will tell";
    std::cout << " them if they are allowed to date their grandchild or not.\n";

    // declare variable age and get users age
    int userAgeInt;
    std::string userAgeString;
    std::cout << "Please enter your age: ";
    std::cin >> userAgeString;

    // try to cast user age string to integer
    try {
        userAgeInt = std::stoi(userAgeString);
        if (userAgeInt > 25 && userAgeInt < 40) {
            std::cout << "You can date our grandchild.\n";
        } else if (userAgeInt < 25 && userAgeInt > 0) {
            std::cout << "You are too young to date our grandchild.\n";
        } else if (userAgeInt > 40 && userAgeInt < 120) {
            std::cout << "You are too old to date our grandchild.\n";
        } else {
            std::cout << "" << userAgeInt << " is not a valid age.\n";
        }
    } catch (std::invalid_argument) {
        std::cout << "" << userAgeString << " is not a valid age.\n";
    }
}
