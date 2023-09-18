#include <iostream>
#include <string>

int main(void) {
    //read user input
    std::string userString;
    std::cout << "Enter a string: ";
    getline(std::cin, userString);
    
    //print characters at odd index positions
    for(int i=1; i<=userString.length(); i+=2) {
        std::cout << userString[i];
    }
    return 0;
}