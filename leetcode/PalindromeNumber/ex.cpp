#include <iostream>
#include <string>

class Solution{
    public:
    bool isPalindrome(int x){
        std::string palindromeToString = std::to_string(x);
        auto strLength = palindromeToString.length()-1;
        for(int i=0; i<palindromeToString.length(); i++){
            if(palindromeToString[i] != palindromeToString[strLength]){
                std::cout << "False" << std::endl;
                return false;
            }
            strLength--;
        }
        std::cout << "True" << std::endl;
        return true;
    }
};

int main(){

    Solution solution;
    int x = 1000021; // Would return false
    // int x = 121; -> Would return true
    solution.isPalindrome(x);

    return 0;;
}




