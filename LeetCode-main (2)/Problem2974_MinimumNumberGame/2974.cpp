class Solution {
    public:
        vector<int> numberGame(vector<int>& nums) {
            vector<int> ans;
            priority_queue<int,vector<int>,greater<>> minHeap(nums.begin(),nums.end());
            while(!minHeap.empty())
            {
                int s1 = minHeap.top();
                minHeap.pop();
                int s2 = minHeap.top();
                minHeap.pop();
    
                ans.push_back(s2);
                ans.push_back(s1);
             }
             return ans;
        }
    };