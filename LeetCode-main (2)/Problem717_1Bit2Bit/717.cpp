class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {

        int bitsSize = bits.size();
        int i;
        for(i = 0 ; i < bitsSize-1 ; i++){
            if(bits[i] == 1){
                i++;
            }
        }

        return (i == bitsSize-1);
        
    }
};