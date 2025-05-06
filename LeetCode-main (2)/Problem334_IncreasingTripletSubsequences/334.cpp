
//brute force approach
class Solution {
    public:
        bool increasingTriplet(vector<int>& nums) {
            int n = nums.size();
    
            for(int i = 0 ; i-2 < n;++i)
            {
                for(int j = i+1 ; j < n-1;++j)
                {
                    for(int k = j+1 ; k < n;++k)
                    {
                        if(nums[i] < nums[j] && nums[j] < nums[k])
                            return true;
                    }
                }
            }
    
            return false;
            
        }
    };

//O(n) approach 
    class Solution {
        public:
            bool increasingTriplet(vector<int>& nums) {
                int first = INT_MAX;
                int second = INT_MAX;
        
                for(auto n : nums)
                {
                    if(first >= n)
                        first = n;
                    else if(second >= n)
                        second = n;
                    else
                        return true;
                }
        
                return false;
            }
        };