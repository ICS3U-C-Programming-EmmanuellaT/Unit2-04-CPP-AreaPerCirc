// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date:Sep 29th,2026
// This program asks the user for the radius of a circle,
// calculates and displays the area and perimeter (circumference)
// back to the user with proper units

#include <cmath>
#include <iostream>

int main() {
    // declare variables
    double  radius;
    double area;
    double perimeter;

    // get the radius from the user
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculate the area and perimeter
    area = (M_PI * radius * radius);
    perimeter = (2 * M_PI * radius);

    // this function sets the decimal precision to 2
    std::cout.precision(2);
    std::cout << std::fixed;

    // display the area and perimeter
    std::cout << "The area is: " << area << "cm²" << std::endl;
    std::cout << "The perimeter is: " << perimeter << "cm" << std::endl;
    return 0;
}
