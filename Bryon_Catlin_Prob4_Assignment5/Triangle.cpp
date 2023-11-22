#include "Triangle.h"
#include <iostream>
#include <cmath>

// no-argument constructor
Triangle::Triangle() {
        side1 = 1.0;
        side2 = 1.0;
        side3 = 1.0;
}

// user-defined constructor
Triangle::Triangle(double side1_, double side2_, double side3_) {
    side1 = side1_;
    side2 = side2_;
    side3 = side3_;
}

// getter for perimeter
double Triangle::getPerimeter() const {
    return side1+side2+side3;
}

// getter for area
double Triangle::getArea() const {
    return (0.25*sqrt((side1 + side2 + side3)*(-side1+ side2 + side3)*(side1 - side2 + side3)*(side1 + side2 - side3)));
}

// print triangle's properties
void Triangle::display() const {
    std::cout << "Area: " << Triangle::getArea() << std::endl;
    std::cout << "Perimeter: " << Triangle::getPerimeter() << std::endl;
    std::cout << "Side1: " << Triangle::side1 << std::endl << "Side2: " << Triangle::side2 << std::endl << "Side3: " << Triangle::side3 << std::endl;
}

// compare triangle area (less than)
bool Triangle::operator<(Triangle other) {
    return (this->getArea())<other.getArea();
}

// compare triangle area (greater than or equal to)
bool Triangle::operator>=(Triangle other) {
    return (this->getArea())>=other.getArea();
}

// compare triangle area (not equal to)
bool Triangle::operator!=(Triangle other) {
    return (this->getArea())!=other.getArea();
}