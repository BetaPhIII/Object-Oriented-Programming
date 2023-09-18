#include <iostream>
#include <iomanip>
#include <cmath>

int main(void) {
    //initialize variables
    float sideNum = 0.0;
    float PI = 3.1415;
    
    //get user input
    std::cout << "Enter the side: ";
    std::cin >> sideNum;
    
    //perform calculations
    float area = ((6*(pow(sideNum,2)))/(4*((tan(PI/6)))));

    //print final output
    std::cout << "The area of the hexagon is " << std::fixed << std::setprecision(2) << area;

    return 0;
}