#include <iostream>
#include <string>

class Solution{
    public:
    bool isPalindrome(int x){
        std::string palindromeToString = std::to_string(x);
        auto strLength = palindromeToString.length()-1;
        for(int i=0; i<palindromeToString.length(); i++){
            if(palindromeToString[i] == palindromeToString[strLength]){
                std::cout << palindromeToString[strLength] << " : " << palindromeToString[i] << std::endl;
            }else{
                std::cout << palindromeToString[strLength] << " : " << palindromeToString[i] << std::endl;
                std::cout << palindromeToString[strLength] << " != " << palindromeToString[i] << std::endl;
                std::cout << "[Wrong Answer] False" << std::endl;

                return false;
            }
            strLength--;
        }
        std::cout << "End of Func: True" << std::endl;
        return true;
    }
};

int main(){

    Solution solution;
    int x = 1000021; // should show false
    solution.isPalindrome(x);

    return 0;;
}