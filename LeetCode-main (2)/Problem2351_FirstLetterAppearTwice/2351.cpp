class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> string;
        int size = s.size();
        char letter;

        for(int i = 0 ; i < size ; ++i){
            string[s[i]]++;
            if(string[s[i]] == 2){
                letter = s[i];
                break;
            }
        }

        return letter;

        
    }
};
