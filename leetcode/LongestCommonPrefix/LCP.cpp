#include <iostream>
#include <string>
#include <vector>

class Solution{
    public:
    std::vector<std::string> input = {"flight", "flow", "flower"};
    std::string lcp;
    int vecSize = input.size()-1; 

    public:
    std::string LongestCommonPrefix(std::vector<std::string>& strs);
};

std::string Solution::LongestCommonPrefix(std::vector<std::string>& strs){
    for(int x=0; x<vecSize; x++){
        for(auto i : strs[vecSize]){
            for(auto j : strs[vecSize-1]){
                if(i == j){
                    lcp.push_back(i);
                }
            }
            vecSize--;
        }
    }
    // if there is no least common prefix
    if(lcp.empty()){ 
        lcp="";
    }else if(lcp.length() == 1){
        lcp="";
    }
    std::cout<<lcp<<std::endl;
    return lcp;
}


int main(){
    Solution solution;
    solution.LongestCommonPrefix(solution.input);

    return 0;
}
 /* 
    [TODO]
    WRAP THE COMPARISON LOOPS IN A LOOP THAT WHILE BREAK 
    WHEN THE I IS GREATER THAN THE SIZE OF THE VECTOR BEING PASSED
    -> THAT WAY YOU CAN DO strs[count] AND EMBED ANOTHER LOOP 
        strs[count++] 
 */