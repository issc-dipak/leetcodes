class Solution {
public:
    bool isPrime(int p){
        if(p <= 1){
            return false;
        }
        int pSqrt = sqrt(p);
        for(int i = 2 ; i <= pSqrt ; ++i){
            if(p%i == 0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int rowSize = nums.size();
        int maxPrime = 0;

        for(int i = 0 ; i < rowSize;++i){
            if(isPrime(nums[i][i])){
                if(nums[i][i] > maxPrime){
                    maxPrime = nums[i][i];
                }
            }
        }

        for(int i = 0 ; i < rowSize;++i){
            if(isPrime(nums[i][rowSize-i-1])){
                if(nums[i][rowSize-i-1] > maxPrime){
                    maxPrime = nums[i][rowSize-i-1];
                }
            }
        }

        return maxPrime;

    }
};