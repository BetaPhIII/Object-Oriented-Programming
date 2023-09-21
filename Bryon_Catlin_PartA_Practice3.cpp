#include <iostream>
#include <vector>

bool containsDuplicate(const std::vector<int>& nums);

int main(void) {

    //initialize vectors
    std::vector<int> v1 = {1,2,3,1};
    std::vector<int> v2 = {1,2,3,4};
    std::vector<int> v3 = {1,2,1,3,3,4,3,2,4,2};

    //print vector true/false for if duplicates contained
    int torf = containsDuplicate(v1);
    if(torf == 1) {
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    torf = containsDuplicate(v2);
    if(torf == 1) {
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    torf = containsDuplicate(v3);
    if(torf == 1) {
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    
    return 0;
}

bool containsDuplicate(const std::vector<int>& nums) {
    //nested for loop to check if vector contains duplicates
    for(int i = 0; i<nums.size(); i++) {
        for(int j = 0; j<nums.size(); j++) {
            if(i==j){break;}
            if(nums[j]==nums[i]){
                return true;
            }
        }
    }
    return false;
}