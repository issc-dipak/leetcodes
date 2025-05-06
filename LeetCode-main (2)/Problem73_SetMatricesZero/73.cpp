class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        vector<int> row(rowSize,0);
        vector<int> col(colSize,0);



        for(int i = 0 ; i < rowSize; ++i){
            for(int j = 0 ; j < colSize ; ++j){
                if(matrix[i][j] == 0){ 
                    row[i] = 1;
                    col[j] = 1; 
                }
            }
        }

        //set the entire row to zero if first element is zero
        for(int i = 0 ; i < rowSize ; ++i){
            if(row[i] == 1){
                for(int j = 0 ; j < colSize;++j){
                    matrix[i][j] = 0;
                }
            }
        }

        //set the entire col to zero if first element of col is zero
        for(int j = 0 ; j < colSize ; ++j){
            if(col[j] == 1){
                for(int i = 0 ; i < rowSize ; ++i){
                    matrix[i][j] =0;
                }
            }
        }
        
    }
};