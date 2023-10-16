#include <iostream>
#include <string>
#include <vector>
#include <map>

class Solution {

    public:
    void isValid(std::string& str){
        int count=0;
        if(s.find("(") != std::string::npos){
            if(s.find(")") != std::string::npos){
                count++;
            }
        }
        if(s.find("{") != std::string::npos){
            if(s.find("}") != std::string::npos){
                count++;
            }
        }
        if(s.find("[") != std::string::npos){
            if(s.find("]") != std::string::npos){
                count++;
            }
        } 
        if(count>3){
            std::cout << "true" << std::endl;
            return true;
        }
        std::cout << "false" << std::endl;
        return false;


        if(closedPar > validPar || closedCur > validCur || closedBrak > validBrak){
            std::cout << "False";
            return false;
        }
    }

};



int main(){

    Solution solution;

    std::string testString = "()[]{}";
    std::string validStr = "()[]{}";
    solution.isValid(testString);

    std::cin.get();
}