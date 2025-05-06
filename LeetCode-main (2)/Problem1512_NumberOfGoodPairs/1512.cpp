#include<unordered_map>
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> pairs;
        int goodPairs = 0;
        int size = nums.size();

        for(int i = 0 ; i < size ; ++i){
            pairs[nums[i]]++;
        }

        for(auto p : pairs){
            if(p.second > 1){
                goodPairs += (p.second * (p.second - 1)) /2;
            }
        }



        return goodPairs;
            
        
    }
};