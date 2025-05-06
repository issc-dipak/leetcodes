class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int i = 1;
        int majorityElement = nums[0];
        int count = 1;

        while(i < size && count <= (size/2) ){
            if(majorityElement == nums[i]){
                count++;
            }
            else{
                majorityElement = nums[i];
                count = 1 ;
            }
            i++;
        }
        
        return nums[i-1];
    }
};