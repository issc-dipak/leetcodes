class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int once = 0;
        for(auto n : nums){
            once = once^n;
        }

        return once;
    }
};
