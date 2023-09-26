#include <iostream>
#include <string>

std::string swapCase(const std::string& n);

int main(void) {
    std::string uIn;
    std::cout << "Enter a string to swap: ";
    getline(std::cin, uIn);
    std::string final = swapCase(uIn);
    std::cout << final;


    return 0;
}

std::string swapCase(const std::string& n) {
    std::string k(n);
    for(int i = 0; i<(k.length());i++) {
        int truth = isupper(k[i]);
        if(truth == 1) {
            k[i] = tolower(k[i]);
        }
        else if(truth == 0) {
            k[i] = toupper(k[i]);
        }
    }
    return k;
}