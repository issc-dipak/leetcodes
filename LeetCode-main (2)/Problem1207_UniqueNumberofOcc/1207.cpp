class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> occ;

        for(auto a : arr)
            occ[a]++;
        
        unordered_set<int> s;
        for(auto o : occ)
            s.insert(o.second);
        
        return s.size() == occ.size();
        
    }
};
