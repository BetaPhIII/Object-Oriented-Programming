#include <iostream>
#include "MySet.cpp"

int main(void) {
    //create object of myset with range 20
    MySet obj1(20);
    //insert elements 13, 7, 20, and 21
    obj1.insertElement(13);
    obj1.insertElement(7);
    obj1.insertElement(20);
    obj1.insertElement(21); //insert element 21 is out of range and should not work
    obj1.printSet();

    //remove elements 22 and 13
    obj1.deleteElement(22); //delete element 22 is outside of range and should not work
    obj1.deleteElement(13);
    obj1.printSet();

    //create obj2 with range 100
    MySet obj2(100);
    //print the empty set
    obj2.printSet();
    //create a copy of obj1 in obj3
    MySet obj3(obj1);
    
    //check equality of obj1 and obj3
    std::cout << "obj3.isEqualTo = " << obj3.isEqualTo(obj1);

    return 0;
}