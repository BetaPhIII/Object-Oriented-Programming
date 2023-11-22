#ifndef CIRCLE2D_H
#define CIRCLE2D_H

class Circle2D {
    public:
    //constructor
    Circle2D(double x_, double y_, double radius_);
    //copy constructor
    Circle2D(const Circle2D & circle);
    //deconstructor
    ~Circle2D();

    //method
    bool overlaps(const Circle2D& circle);
    static int getNumberOfCircles();
    
    private:
    double x;
    double y;
    double radius;
    static int numberOfCircles;
    
};

#endif