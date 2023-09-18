#include <iostream>

int oneDigitSum(int userNum);

int main(void) {
    //initialize variable
    int userInput = 0;

    //get user input
    std::cout << "Input a number from 0 to 1000000: ";
    std::cin >> userInput;
    
    int sum = userInput;
    
    //iterate oneDigitSum until sum is only one digit
    while(sum>=10){
    sum = oneDigitSum(sum);
    }

    //print final output
    std::cout <<"The one digit sum is " <<sum<< ".";
    return 0;
}

int oneDigitSum(int userNum) {
    int sum = 0;

    //perform operations
    while (userNum > 0){
        sum += userNum % 10;
        userNum /= 10;
    }

    return sum;
}