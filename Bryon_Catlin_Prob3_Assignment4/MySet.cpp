#include "MySet.h"
#include <iostream>

//constructor
MySet::MySet(unsigned int range_) {
    range = range_;
    set = new bool[range_+1];
    for(int i = 0; i<=range_ ; i++) {
        *(set + i) = false;
    }
}
//copy constructor
MySet::MySet(const MySet &other) {
    size = other.size;
    range= other.range;
    
    set = new bool[range+1];
    for(int i = 0; i<=range; i++) { 
        set[i] = other.set[i];
    }
    
}
//destructor
MySet::~MySet() {
    delete [] set;
}
//method to insert element
void MySet::insertElement(int k) {
    //checks if in range
    if(k <= range) {
        //if in range modify set value at index k to true
        *(set + k) = true;
        size++;
    }
    else {
        std::cout << "Invalid insert attempted for the number " << k << "!" << std::endl;
    }
    
}
void MySet::deleteElement(int m) {
    //check if in range
    if(m <= range) {
        //modify value of set at m to false
        *(set + m) = false;
        size--;
    }
    else {
        std::cout << "Invalid delete attempted for the number " << m << "!" << std::endl;
    }
}
void MySet::printSet() {
    //if the size of the true values in set is 0, print empty set
    if(!size) {
        std::cout << "{ --- }" << std::endl;
    }
    else{
        //print true values of the set
        std::cout << "{";
        bool hasElements = false;
        for(int i = 0; i<=range; i++) {
            if((*(set+i)) && !hasElements) {
                std::cout << " " << i;
                hasElements = true;
            } 
            else if((*(set+i)) && hasElements){
                std::cout << ", " << i;
            }
        }
        std::cout << " }" << std::endl;
    }
}
bool MySet::isEqualTo(const MySet& other) {
    //check if sizes are equal
    if(this->size == other.size) {
        //if sizes are equal increment through each and check equality
        for(int i = 0; i<other.range; i++) {
            if(this->set[i] != other.set[i]) {
                return false;
            }
        }
        return true;
    }
    //if sizes are not equal return false
    else{
        return false;
    }
}
    