class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char,int> st;
            queue<int> unique;
            int size = s.size();
    
            for(auto c : s){
                st[c]++;
            }
    
            for(int i = 0 ; i < size ; ++i)
            {
                if(st.find(s[i]) != st.end())
                    if(st[s[i]] == 1)
                        return i;
            }
    
            return -1;
    
        }
    };