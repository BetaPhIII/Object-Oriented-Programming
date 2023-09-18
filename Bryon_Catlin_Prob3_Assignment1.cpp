#include <iostream>
#include <cmath>

int main(void) {
    //initialize variables
    int userInt = 0;
    
    //get user input
    std::cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    std::cin >> userInt;
    
    //perform calculations and set variables
    int remainder = userInt%4;
    float sqrRoot = sqrt(userInt);
    int quotient = userInt/4;

    //check userInt and print output accordingly
    if(userInt<0) {
        std::cout << "The program does not accept negative numbers";
    }
    else if(userInt<=100){
        //check if divisible by four
        if((userInt%4) == 0){
            std::cout << "The given number (" << userInt << ") is divisible by 4\nQuotient: " << quotient << " and remainder " << remainder;
        }
        else if((userInt%4)!= 0) {
            std::cout << "The given number (" << userInt << ") is not divisible by 4\nQuotient: " << quotient << " and remainder " << remainder;
        }
    }
    else if(userInt>100){
        std::cout << "The entered number is greater than 100 and square root of the number is " << sqrRoot;
    }

    return 0;
}