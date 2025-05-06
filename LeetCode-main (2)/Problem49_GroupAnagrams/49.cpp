class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagrams;
        vector<vector<string>> groupedAnagrams;
        
        string s;
        for(auto e: strs){
            s = e;
            sort(s.begin(),s.end());
            anagrams[s].push_back(e);
        }

        for(auto e : anagrams){
            groupedAnagrams.push_back(e.second);
        }

        return groupedAnagrams;
    }
};
