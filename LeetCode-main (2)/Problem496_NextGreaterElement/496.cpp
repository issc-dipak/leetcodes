class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            unordered_map<int,int> nextGreat;
            stack<int> s;
            int size = nums2.size();
    
            for(int i = size-1 ; i >= 0 ; --i ){
                while(!s.empty() && s.top() <= nums2[i])
                    s.pop();
                nextGreat[nums2[i]] = s.empty() ? -1 : s.top();
                s.push(nums2[i]);
            } 
    
            vector<int> ans;
            for(auto n : nums1){
                ans.push_back(nextGreat[n]);
            }
    
            return ans;
        }
    };