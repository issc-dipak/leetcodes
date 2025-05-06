class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int validBinary = 0;
        for(auto n : derived){
            validBinary ^= n;
        }

        if(validBinary==0){
            return true;
        }
        return false;
    }
};
