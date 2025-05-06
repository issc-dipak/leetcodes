class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> maxThree;
        for(int n : nums){
            maxThree.insert(n);

            if(maxThree.size() > 3){
                maxThree.erase(maxThree.begin());
            }
        }

        if(maxThree.size() < 3){
            return *maxThree.rbegin();
        }

        return *maxThree.begin();
    }
};