// Copyright (c) 2022 Peter Sobowale All rights reserved.

// Created by: Peter Sobowale
// Created on: Sept 21, 2022
// # This program calculates the area and circumference
// of a circle with the radius 15mm.

// Libraries
#include <iostream>
#include <cmath>

int main() {
    std::cout << "For a circle with the radius 15mm:\n";
    std::cout << "\n";
    std::cout << "Area = " << M_PI * pow(15, 2) << " mm^2\n";
    std::cout << "Perimeter = " << 2 * M_PI * 15 << " mm\n";
}
