class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int nCandies = candies.size();
        vector<bool> greatest(nCandies);

        for(int i = 0; i < nCandies; ++i){
            greatest[i] = true;
            for(int j = 0 ; j < nCandies ; ++j){
                if(i!=j){
                    if(candies[j] > candies[i] + extraCandies){
                        greatest[i] = false;
                        break;
                    }
                }
            }
        }

        return greatest;
    }
};