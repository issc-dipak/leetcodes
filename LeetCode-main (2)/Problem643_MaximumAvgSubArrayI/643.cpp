class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            double avg = 0;
            double maxAvg = 0;
            int size = nums.size();
    
            for(int i = 0; i < k ; ++i)
                avg += nums[i];
            
            maxAvg = avg;
    
            for(int i = k ; i < size;++i )
            { 
                avg += (nums[i] - nums[i-k]);
                maxAvg = max(maxAvg,avg);
            }
    
            return maxAvg/k;
    
    
        }
    };