#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle{
    public:
    // constructors
    Triangle();
    Triangle(double side1_, double side2_, double side3_);
    
    // getter functions
    double getPerimeter() const;
    double getArea() const;
    
    // display values for area, perimeter, and sides
    void display() const;
    
    // comparison operators
    bool operator<(Triangle other);
    bool operator>=(Triangle other);
    bool operator!=(Triangle other);
    
    private:
    double side1;
    double side2;
    double side3;
};

#endif