class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer;
        bool notExists;

        unordered_set<int> set1,set2;

        for(int num : nums1){
            set1.insert(num);
        }

        for(int num : nums2){
            set2.insert(num);
        }

        vector<int> l1,l2;
        for(auto e : set1){
            if(!set2.count(e)){
                l1.push_back(e);
            }
        }

        for(auto e : set2){
            if(!set1.count(e)){
                l2.push_back(e);
            }
        }

        answer.push_back(l1);
        answer.push_back(l2);

        return answer;
    }
};
