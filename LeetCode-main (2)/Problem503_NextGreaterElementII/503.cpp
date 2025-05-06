class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int size = nums.size();
        vector<int> nextGreaterElements(size, -1);  // Initialize vector with -1
        stack<int> s;
        
        // Iterate twice to simulate circular behavior
        for(int i = 0; i < 2 * size; i++) {
            while(!s.empty() && nums[s.top()] < nums[i % size]) {
                nextGreaterElements[s.top()] = nums[i % size];
                s.pop();
            }
            if (i < size) s.push(i);
        }

        return nextGreaterElements;
    }
};

