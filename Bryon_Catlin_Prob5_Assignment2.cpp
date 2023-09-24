#include <iostream>
#include <vector>
#include <string>

//function prototype
std::string my_join(std::vector<std::string> words, std::string separ); 

int main(void) {
    //intialize vectors and strings
    std::vector<std::string>v1 = {"abc", "def", "gh", "!"};
    std::string separ = "";
    
    //print final
    std::cout << my_join(v1, separ) << std::endl;

    return 0;
}

std::string my_join(std::vector<std::string> words, std::string separ) {
    
    std::string join;
    //loop through vector elements
    for(int i = 0; i < words.size(); i++) {
        join+=words[i];

        //if vector is on last element do not print separ
        if(i!=words.size()-1){

        //loop through separ string
        for(int j = 0; j<=separ.size();j++) {
            join+=separ[j];
            }
        }
    }
    //return final join string
    return join;
}