#include <iostream>
#include <vector>
#include <iostream>
#include <vector>

int containsDuplicate(const std::vector<int>& nums);

int main(void) {

    //initialize vectors
    std::vector<int> v1 = {1,1,1,1};
    std::vector<int> v2 = {1,1,2,2};
    std::vector<int> v3 = {1,3,4,3,1,3,4,3};
    std::vector<int> v4 = {1,2,3,4};

    //call and print number of duplicates
    int torf = containsDuplicate(v1);
    std::cout << "Number of duplicates = " << torf << std::endl;

    torf = containsDuplicate(v2);
    std::cout << "Number of duplicates = " << torf << std::endl;

    torf = containsDuplicate(v3);
    std::cout << "Number of duplicates = " << torf << std::endl;

    torf = containsDuplicate(v4);
    std::cout << "Number of duplicates = " << torf << std::endl;
    
    return 0;
}

int containsDuplicate(const std::vector<int>& nums) {
    //initialize return value
    int duplicate = 0;
    //initialize a vector containing already counted duplicates
    std::vector<int> dupeVector = {NULL};
    //nested for loop to loop through elements and check if duplicates
    for(int i = 0; i<nums.size(); i++) {
        for(int j = 0; j<nums.size(); j++) {
            //create a counter to tell compiler if an extra duplicate was read
            int exDuplicate = 0;
            //add break for the (0,0) case
            if(i==j){break;}
            //if the positions are duplicates enter
            if(nums[j]==nums[i]){
                //check if duplicate has already been counted
                for(int k = 0; k<(dupeVector.size()); k++) {
                    if(nums[j] == dupeVector[k]) {
                        exDuplicate = 1;
                    }
                }
                //if duplicate already counted break
                if(exDuplicate == 1){
                    break;
                }
                //else add duplicate to counted duplicates vector and incremement counter
                else{
                    duplicate++;
                    dupeVector.push_back(nums[i]);
                }

            }
        }
    }
    return duplicate;
}

