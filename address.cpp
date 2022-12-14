// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: December 08 2022
// This format namees following
// the Canadian Post format

#include <iostream>
using std::string;

// Defining the function that formats the name
string formatname(string name, string streetNum, string
streetName, string city, string province, string
postalCode, string apartmentNum = "") {
    if (apartmentNum == "") {
        return name + "\n" + streetNum + " " + streetName + "\n" +
        city + " " + province + " " + postalCode;
    } else {
        return name + "\n" + streetNum + " " +
        apartmentNum + " " + streetName + "\n" + city +
        " " + province + " " + postalCode;
    }
}

int main() {
    // Declaring variables
    std::string username, userStreetNum, userapartmentNum;
    std::string userStreetName, userCity, userProvince, userPostalCode;

    // Getting all the name information from user
    std::cout << "Enter a your full name: ";
    std::getline(std::cin, username);
    std::cout << "Enter a street number: ";
    std::getline(std::cin, userStreetNum);
    std::cout << "Enter a apartment number if any.";
    std::cout << "(Press enter to skip this): ";
    std::getline(std::cin, userapartmentNum);
    std::cout << "Enter a street name: ";
    std::getline(std::cin, userStreetName);
    std::cout << "Enter a city: ";
    std::getline(std::cin, userCity);
    std::cout << "Enter a province (as a abbreviation,";
    std::cout << "EX: ON, AB, BC, QC, ect.) : ";
    std::getline(std::cin, userProvince);
    std::cout << "Enter a postal code: ";
    std::getline(std::cin, userPostalCode);

    // Calling out function and passing the input as arguments
    string formattedname = formatname(username, userStreetNum,
    userStreetName, userCity, userProvince,
    userPostalCode, userapartmentNum);

    // Displaying formatted name
    std::cout << "\n"
              << formattedname;
}
