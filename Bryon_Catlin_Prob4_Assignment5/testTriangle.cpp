#include <iostream>
#include "Triangle.cpp"

int main(void) {
    //initialize triangles
    Triangle t1(4,4,4);
    Triangle t2(5,5,2);
    Triangle t3(5.5,5.5,1);

    //display triangle's properties
    std::cout << "Triangle 1 data: " << std::endl;
    t1.display();
    std::cout << "Triangle 2 data: " << std::endl;
    t2.display();
    std::cout << "Triangle 3 data: " << std::endl;
    t3.display();

    //print triangle's comparison values
    std::cout << "Triangle1<Triangle2: " << (t1<t2) << std::endl;
    std::cout << "Triangle1>=Triangle3: " << (t1>=t3) << std::endl;
    std::cout << "Triangle2!=Triangle3: " << (t2!=t3) << std::endl;
    

    return 0;
}