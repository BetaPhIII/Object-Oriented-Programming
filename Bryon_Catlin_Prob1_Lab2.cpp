#include <iostream>
#include <iomanip>

int main(void) {
    //initialize variables
    int userIn = 0;
    int column = 1;

    //get user input
    std::cout << "Enter the number of lines (from 1 to 15): ";
    std::cin >> userIn;

    //perform pyramid printing process
    for(int i = 1; i<=userIn; i++) {
        std::cout <<"|";
        for(int j = 1; j<=userIn - i; j++){
            std::cout << std::setw(4)<< "";    
            }
        for(int k = i; k>=1; k--) {
            if(k<10) {std::cout << k << "   ";}
            else{std::cout << k << "  ";}
            
            }
        for(int x = 2; x<=i; x++) {
            if(x<10) {std::cout << x << "   ";}
            else{std::cout << x << "  ";}
        }
        for(int r = 1; r<=userIn - i; r++){
            std::cout << "    ";
        }
        std::cout << "|";
        std::cout << std::endl;
    }


    return 0;
}