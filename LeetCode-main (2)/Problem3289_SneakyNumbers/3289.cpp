class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> sneakyNumbers;
        unordered_map<int,int> numbers;
        int size = nums.size();

        for(int i = 0 ; i < size;++i){
            numbers[nums[i]]++;
        }

        for(auto n : numbers){
            if(n.second > 1){
                sneakyNumbers.push_back(n.first);
            }
        }

        return sneakyNumbers;
    }
};
