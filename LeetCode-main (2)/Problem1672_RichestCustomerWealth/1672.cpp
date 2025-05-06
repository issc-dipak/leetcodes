class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealthPerson = 0;
        int accountsRow = accounts.size();
        int acccountCol = accounts[0].size();
        int rowSum;
        for(int i = 0 ; i < accountsRow ; ++i){
            rowSum = 0;
            for(int j =0 ; j < acccountCol ; ++j ){
                rowSum += accounts[i][j];
            }
            wealthPerson = max(wealthPerson,rowSum);
        }

        return wealthPerson;
    }
};
