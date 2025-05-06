class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1_s = word1.size();
        int w2_s = word2.size();
        int length = (w1_s>w2_s) ? w1_s : w2_s;
        string merged;
        
        for(int i = 0 ; i < length;++i){
            if(i < w1_s ){
                merged += word1[i];
                
            } if(i < w2_s){
                merged+=word2[i];
              
            }
        }
        return merged;

    }
};