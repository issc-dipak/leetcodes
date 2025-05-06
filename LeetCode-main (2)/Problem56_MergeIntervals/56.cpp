class Solution {
public:

    struct CompareFirst{
        bool operator() (const vector<int>& a,const vector<int>& b){
            return a[0] < b[0];
        }
    };

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        stack<vector<int>> intervalsStk;
        vector<vector<int>> mergedIntervals;
        int rowSize = intervals.size();
        
        sort(intervals.begin(),intervals.end(),CompareFirst());
        intervalsStk.push(intervals[0]);

        for(int i = 1 ; i < rowSize;++i){
            if(intervalsStk.top()[1] >= intervals[i][0]){
                intervalsStk.top()[1]  = max(intervals[i][1],intervalsStk.top()[1]);
               
            }else{
                 intervalsStk.push(intervals[i]);
            }
        }
        while(!intervalsStk.empty()){
            mergedIntervals.push_back(intervalsStk.top());
            intervalsStk.pop();
        }

        return mergedIntervals;
    }
};
