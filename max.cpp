// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by Gabriel A
// Created on Jan 2021
// This program generates random integers and identifies the largest

#include <iostream>
#include <random>
#include <array>
#include <algorithm>

int maximumNumber(std::array<int, 10> randomNumber) {
    // this function identifies the largest number
    int maximum;

    std::sort(randomNumber.begin(), randomNumber.end());
    maximum = randomNumber[9];

    return maximum;
}

main() {
    // this function uses an array

    std::array<int, 10> randomNumber;
    int aSingleNumber;
    int number;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        aSingleNumber = idist(rgen);
        randomNumber[loop_counter] = aSingleNumber;
    }
    std::cout << "";

    std::cout << "Here are 10 completely random numbers:\n\n";

    for (int loop_counter; loop_counter < 10; loop_counter++) {
        std::cout << randomNumber[loop_counter] << " ";
    }

    number = maximumNumber(randomNumber);

    std::cout << "\n\nThe highest number in this list is: " << number << "\n";
}
