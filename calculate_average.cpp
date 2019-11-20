// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Nov 2019
// This program calculate returns the middle percentage mark
//   and takes the level to grade

#include <iostream>
#include <string>


float CalculateAverage(int firstMark, int secondMark, int thirdMark,
                     int fourthMark) {
    // this function calculate the average mark

    float average;

    // process
    average = (firstMark + secondMark + thirdMark + fourthMark) 
    / 4.0;

    return average;
}


main() {
    // this function gets base and height

    int firstMark;
    int secondMark;
    int thirdMark;
    int fourthMark;
    float average;
    std::string level;

    // input
    std::cout << "Enter your first period mark (integer): ";
    std::cin >> firstMark;
    std::cout << "Enter your second period mark (integer): ";
    std::cin >> secondMark;
    std::cout << "Enter your third period mark (integer): ";
    std::cin >> thirdMark;
    std::cout << "Enter your fourth period mark (integer): ";
    std::cin >> fourthMark;
    std::cout << std::endl;

    // call functions
    average = CalculateAverage(firstMark, secondMark, thirdMark, fourthMark);

    if (average >= 95 && average <= 100) {
        level = "4+";
    } else if (average >= 87 && average <= 94) {
        level = "4";
    } else if (average >= 80 && average <= 86) {
        level = "4-";
    } else if (average >= 77 && average <= 79) {
        level = "3+";
    } else if (average >= 73 && average <= 76) {
        level = "3";
    } else if (average >= 70 && average <= 72) {
        level = "3-";
    } else if (average >= 67 && average <= 69) {
        level = "2+";
    } else if (average >= 63 && average <= 66) {
        level = "2";
    } else if (average >= 60 && average <= 62) {
        level = "2-";
    } else if (average >= 57 && average <= 59) {
        level = "1+";
    } else if (average >= 53 && average <= 56) {
        level = "1";
    } else if (average >= 50 && average <= 52) {
        level = "1-";
    } else if (average >= 1 && average <= 49) {
        level = "R";
    } else if (average == 0) {
        level = "NE";
    } else {
        level = "minus";
    }

    // output
    std::cout << "Your middle mark is " << average << "% and level is "
              << level << std::endl;
}
