#include "Circle2D.h"
#include <iostream>
#include <cmath>

//initialize static int numberOfCircles to zero
int Circle2D::numberOfCircles = 0;

//constructor
Circle2D::Circle2D(double x_, double y_, double radius_){
    x = x_;
    y = y_;
    radius = radius_;
    numberOfCircles++;
}
//copy constructor
Circle2D::Circle2D(const Circle2D & circle){
    x = circle.x;
    y = circle.y;
    radius = circle.radius;
    numberOfCircles++;
}

// return static var numberOfcircles for each circle created
int Circle2D::getNumberOfCircles() {
    return numberOfCircles;
}

//method checks if circles overlap
bool Circle2D::overlaps(const Circle2D& circle) {
    if((sqrt(pow(((this->x)-circle.x),2)+pow(((this->y)-circle.y),2))) <= 0) {
        return true;
    }
    else {
        return false;
    }
}

//destructor
Circle2D::~Circle2D () {
    numberOfCircles--;
}