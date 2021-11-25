// Copyright (c) 2021 Abdul Basit All rights reserved.
//
// Created by: Abdul Basit
// Created on: Nov 2021
// this program calculates area of octagon

#include <iostream>
#include <cmath>

int main() {
    // variable declarations
    int side;
    double area;
    // input
    std::cout << "We will calculate the area of octagon " << std::endl;
    std::cout << "Enter the side of octagon (mm): ";
    std::cin >> side;
    // process
    area = 2 * (1 + sqrt(2)) * side * side;
    // output
    std::cout << "Area is " << (area) << " mm²" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
