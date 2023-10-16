#include <iostream>
#include <string>
#include <stack>

class Solution{
    public:
    std::stack<char> m_stack;

    public:
    bool isValid(std::string& str);
    void PrintMap(std::stack<char> stack);
};

bool Solution::isValid(std::string& str){
    for(char c : str){
        if(c == '(' || c == '[' || c == '{'){
            m_stack.push(c);
        } else if (m_stack.empty()){
            return false;
        } else if (c == ')' && m_stack.top() != '(' || 
                c == '}' && m_stack.top() != '{' || 
                c == ']' && m_stack.top() != '['){
                    return false;
        } else {
            m_stack.pop();
        }
    }
    return true;
} 

int main(){
    Solution solution;
    std::string s = "{()}"; 

    solution.isValid(s);

    return 0;
}

