#include <iostream>

int main(void) {
    //initialize variables
    int userInput = 0;
    int sum = 0;

    //get user input
    std::cout << "Input a number from 0 to 1000000: ";
    std::cin >> userInput;
    
    //perform operations
    while (userInput > 0){
        sum += userInput % 10;
        userInput /= 10;
    }
    
    //print final sum
    std::cout << "The sum of the digits is " << sum << ".";

    return 0;
}

