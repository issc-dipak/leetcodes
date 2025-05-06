class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int nums1Size = nums1.size();
        int nums2Size = nums2.size();

        int ans2 = 0;
        int ans1 = 0;

        if(nums1Size%2){
             for(int n : nums2){
                ans2 ^=  n;
        }
        
            
        }

        if(nums2Size%2){
            for(int n : nums1){
                ans1 ^= n;
        }
            
        }

        return ans1^ans2;

    
        
    }
};