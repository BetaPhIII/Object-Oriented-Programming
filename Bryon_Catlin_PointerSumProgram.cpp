#include <iostream>

double sumEven(const double * arr, int size) {
    double sum = 0;
    for(int i = 0; i<=size; i++) {
        if(i%2 == 0) {
            sum+=*(arr+i+1);
        }
    }
    return sum;
}

int main(void) {
    double arr[6] = {0};
    std::cout << "please enter 6 double numbers: ";
    for(int i = 0; i<6; i++) {
        std::cin >> arr[i];
    }
    std::cout << sumEven(arr, 6) <<std::endl;
    
    return 0;
}