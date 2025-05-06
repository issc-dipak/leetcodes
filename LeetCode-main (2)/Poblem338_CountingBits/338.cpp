class Solution {
public:
    vector<int> countBits(int n) {
        int temp,count,t;
        vector<int> ans;
        for(int i = 0 ; i <= n;++i){
            temp = i;
            count = 0;
            while(temp!=0){
                t = temp & 1;
                if(t == 1){
                    count++;
                }
                temp = temp>>1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};