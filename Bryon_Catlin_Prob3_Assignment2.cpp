#include <iostream>

int evenCount(unsigned int value);

int main(void) {

    //Get user input
    int userIn = 0;
    std::cout << "Enter a number: ";
    std::cin >> userIn;
    //call function evenCount then print evenNo
    int evenNo = evenCount(userIn);
    std::cout << "The number of even digits is " << evenNo;

    return 0;
}

int evenCount(unsigned int value) {
    //initialize static int to count iterations of function
    static int iterations = 0;
    //if function has been run more than once return 0
    if(value == 0 && iterations > 0){
        return 0;
    }
    //if number even incremement iterations then call recursive function with evenCount + 1
    else if(value % 2 == 0){
        iterations++;
        return 1 + evenCount(value / 10);
    }
    else {
        //increment iterations then call recursive function
        iterations++;
        return evenCount(value / 10);
    }
}