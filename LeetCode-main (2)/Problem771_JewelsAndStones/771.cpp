class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> stoneCount;
        int stoneSize = stones.size();
        int jewelsSize = jewels.size();
        int jewelCount = 0;
        for(int i = 0 ;i < stoneSize ; ++i){
            stoneCount[stones[i]]++;
        }

        for(int j = 0 ; j < jewelsSize ; ++j){
            if(stoneCount.find(jewels[j]) != stoneCount.end()){
                jewelCount += stoneCount[jewels[j]];
            }
        }

        return jewelCount;
    }
};
