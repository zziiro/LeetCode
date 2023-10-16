#include <iostream>
#include <vector>

class Solution{
    public:
    std::vector<int> m_result;

    public:
    std::vector<int> TwoSum(std::vector<int>& nums, int target) 
    {   
        for(int i = 0; i < nums.size(); i++){
            for(int j=0; j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                    m_result[nums[i], nums[j]];
                }
            }
        }
        std::cout << m_result[0] << " : " << m_result[1] << std::endl;
        return m_result;
    }
};

int main(){

    Solution solution;
    int target = 9;
    std::vector<int> nums = {2,7,11,15};

    solution.TwoSum(nums,target);

    return 0;
}