class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =  nums.size();

       
        vector<int> prefix(n,1);
        prefix[0] = 1; //first entry does not has prefix
        for(int i = 1 ; i < n;++i)
            prefix[i] = prefix[i-1]*nums[i-1]; //multiply prefix of before number with itself to get the prefix product without the number

        vector<int> suffix(n,1);
        suffix[n-1] = 1; //last entry does not has postfix
        for(int i = n-2;i>= 0;--i)
            suffix[i] = suffix[i+1]*nums[i+1];//multiply suffix of after number with itself to get the suffix product without the number
        
         vector<int> answer(n,1);
         for(int i = 0 ; i < n;++i)
            answer[i] = prefix[i]*suffix[i];

        return answer;
    }
};
