class Solution {
public:
    string removeStars(string s) {
        string withoutStarts;
        int size = s.size();

        for(int i = 0 ; i < size;++i){
            if(s[i] != '*'){
                withoutStarts.push_back(s[i]);
            }
            else{
                withoutStarts.pop_back();
            }
        }

        return withoutStarts;
    }
};