#include <iostream>

int evenCount(unsigned int value);

int main(void) {

    int test = evenCount(10434052);
    std::cout <<test;

    return 0;
}

int evenCount(unsigned int value) {
    static int evens = 0;
    if(value == 0) {
        return evens;
    }
    else {
        if((value%2) == 0) {
            evens++;
            value/=10;
            evenCount(value);
        }
        else{
            value/=10;
            evenCount(value);
        }
    }


    // if(value == 0)
    //     return 1;
    // else if(value % 2 == 0)
    //     return 1 + evenCount(value / 10);
    // else
    //     return evenCount(value / 10);
}