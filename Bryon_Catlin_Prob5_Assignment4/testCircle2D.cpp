#include "Circle2D.cpp"
#include <iostream>

int main(void) {
    // create dynamic object pCir1
    Circle2D* pCir1 = new Circle2D(2, 2, 5.5);
    // create object cir2 
    Circle2D cir2(-6,-3,1.5);
    // print number of circles
    std::cout << "Number of objects is " << pCir1->getNumberOfCircles() << std::endl;
    // create object cir3 which is a copy of cir2
    Circle2D cir3(cir2);
    // print number of circles
    std::cout << "Number of objects is " << cir3.getNumberOfCircles() << std::endl;
    // check if pCir1 overlaps cir2
    std::cout << "pCir1 overlaps cir2 = " << pCir1->overlaps(cir2) << std::endl;
    // check if cir3 overlaps cir2
    std::cout << "cir3 overlaps cir2 = " << cir3.overlaps(cir2) << std::endl;
    // release dynamically allocated memory for pCir1
    delete pCir1;
    // print number of objects from static var
    std::cout << "Number of objects is " << Circle2D::getNumberOfCircles();

    return 0;
}