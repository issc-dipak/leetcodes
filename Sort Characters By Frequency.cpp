class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for (int i=0;i<s.size();i++){mp[s[i]]++;}
        s.clear();
        vector<pair<int,string>>ans;
        for (auto it:mp){
            ans.push_back({it.second,""});
            for (int i=0;i<it.second;i++){ans.back().second+=it.first;}
        }
        sort(ans.begin(),ans.end());
        for (int i=ans.size()-1;i>=0;i--){s+=ans[i].second;}
        return s;
    }
};
