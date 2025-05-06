class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sString;
        int sSize = s.size();
        int tSize = t.size();

        for(auto e:s){
            sString[e]++;
        }

        for(auto e :t){
            if(sString.find(e) != sString.end()){
                sString[e]--;
            }
            else{
                return false;
            }
        }

        for(auto e : sString){
            if(e.second!=0){
                return false;
            }
        }

        return true;
        

    }
};
