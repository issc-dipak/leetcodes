class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        
        int right = 0, left = 0, ans = 0;
        unordered_set<char> subString;
        while(right < size){
            if(!subString.count(s[right])){
                subString.insert(s[right]);
                ans = max(ans,right-left+1);
                right++;
            }else{
                subString.erase(s[left]);
                left++;
            }
        }

        return ans;
        
    }
};