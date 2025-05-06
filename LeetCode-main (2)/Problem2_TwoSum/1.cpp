#include <iostream>
#include <vector>

class Solution {
    public :
    std::vector<int> twoSum(std::vector<int>& nums , int target){
        int complement;
        for (int i = 0; i < nums.size(); i++)
        {
            complement = target - nums[i];
            for(int j = 0 ; j < nums.size() ; ++j){
                if(i!=j){
                    if(complement == nums[j]){
                        return {i,j};
                    }
                }
            }
        }

        return {};
        
    }
};