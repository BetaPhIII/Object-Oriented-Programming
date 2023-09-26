#include <iostream>

int main(void) {
    int num = 5;
    int *p = &num;
    std::cout << num << std::endl;
    std::cout << *p << std::endl;
    std::cout << &num << std::endl;
    std::cout << p << std::endl;
    std::cout << p << std::endl;
    std::cout << &p << std::endl;

    return 0;
}