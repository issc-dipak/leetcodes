class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rMat = mat.size();
        int cMat = mat[0].size();

        vector<vector<int>> reshapeMat(r,vector<int>(c,0));
        if(rMat*cMat == r*c){
            int a= 0; int b =0;
            for(int i = 0 ; i < rMat;++i){
                for(int j = 0 ; j < cMat ; ++j){
                    reshapeMat[a][b] = mat[i][j];
                    b++;
                    if(b == c){
                        a++;
                        b = 0 ;
                    }
                       
                }
            }

            return reshapeMat;
        }

        return mat;
        
    }
};
