#include <iostream>
#include <string>
#include <map>

class Solution {
public:
    int conversion=0;
    std::map<char, int> roman = {
        {'I', 1}, {'V', 5},{'X', 10},{'L', 50},
        {'C', 100},{'D', 500}, {'M', 1000}
    } ;
public:
    int romanToInt(std::string& str);
};

int Solution::romanToInt(std::string& str){
    // push the elements into the queue
    for(int i=0; i<str.length(); i++){
        if(roman[str[i]] >= roman[str[i+1]]){
            conversion+=roman[str[i]];
        } else {
            conversion-=roman[str[i]];
        }
    }    
    return conversion;
}


int main(){

    Solution solution;
    std::string romanNumeral = "MCMXCIV";

    solution.romanToInt(romanNumeral);

    return 0;
}