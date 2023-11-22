#include <iostream>
#include <string>

template<typename T>
//compare the values inside of the arrays and reurn the smallest value
T getMin(const T array[], int size) {
    T minimum = array[0];
    for(int i = 1; i<size; i++) {
        if(array[i]<minimum) {
            minimum = array[i];
        }
    }
    return minimum;   
}

int main(void) {
    //initialize all arrays
    int i_array[4] = {1,3,-3,80};
    double d_array[4] = {1.57,3.14159,-360,0};
    std::string s_array[4] = {"abcd", "ab", "Adad", "Cat"};

    //print minimum value returned from the template function "getMin"
    std::cout << getMin(i_array, 4) << std::endl;
    std::cout << getMin(d_array, 4) << std::endl;
    std::cout << getMin(s_array, 4) << std::endl;
    

    return 0;
}