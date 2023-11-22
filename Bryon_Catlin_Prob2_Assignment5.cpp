#include <iostream>

template<typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2) {
    //get smallest value of both arrays
    T teensyWeensyValue = list1[0];
    for(int i = 1; i<size1;i++) {
        if(list1[i] < teensyWeensyValue) {
            teensyWeensyValue = list1[i];
        }
    }
    T ittyBittyValue = list2[0];
    for(int j = 1; j<size2; j++){
        if(list2[j] < ittyBittyValue) {
            ittyBittyValue = list2[j];
        }
    }
    /*if the smallest value in the second array is greater than the smallest in the first,
    there will exist a value in the first array which is less than all values in the second array
    */
    return (ittyBittyValue>teensyWeensyValue);
}

int main(void) {
    //initialize arrays
    int i_array[4] = {6,7,8,9};
    int i_array2[5] = {8,1190,90834,54,100};
    double d_array[4] = {1.57,3.14159,-360,0};
    double d_array2[1] = {-10000};
    std::string s_array[4] = {"abcd", "zb", "Cdad", "Cat"};
    std::string s_array2[2] = {"abcdef", "xy"};

    //print the value of the boolean function "isGreater" with inputs of all six arrays
    std::cout << "i_array>i_array2: " << isGreater(i_array, i_array2, 4,5) << std::endl;
    std::cout << "d_array>d_array2: " << isGreater(d_array, d_array2, 4,1) << std::endl;
    std::cout << "s_array>s_array2: " << isGreater(s_array, s_array2, 4,2) << std::endl;

    return 0;
}
