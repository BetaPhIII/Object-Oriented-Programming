#include <iostream>
#include <cctype>
#include <string>

using std::string;

//function prototype
bool isPalindrome(const std::string& str);

int main() {
    //initialize strings
    string s1("AbBa");
    string s2("Ab2Ba");
    string s3("AcBa");
    string s4("");
    string s5("ABBA");
    //print and check if palindrome
    std::cout << "\"" << s1 << "\" is " << ((isPalindrome(s1)) ? "a palindrome\n" : "NOT a palindrome\n");
    std::cout << "\"" << s2 << "\" is " << ((isPalindrome(s2)) ? "a palindrome\n" : "NOT a palindrome\n");
    std::cout << "\"" << s3 << "\" is " << ((isPalindrome(s3)) ? "a palindrome\n" : "NOT a palindrome\n");
    std::cout << "\"" << s4 << "\" is " << ((isPalindrome(s4)) ? "a palindrome\n" : "NOT a palindrome\n");
    std::cout << "\"" << s5 << "\" is " << ((isPalindrome(s5)) ? "a palindrome\n" : "NOT a palindrome\n");
 return 0;
}

bool isPalindrome(const std::string& str) {
    //initialize string length
    int length = str.length();
    //check each character and equivalence
    for(int i = 0; i<=(length/2);i++){
        char a = tolower(str[i]);
        char b = tolower(str[length-1]);
        if(a!=b) {
            return false;
        }
        length--;
    }
    return true;
}
