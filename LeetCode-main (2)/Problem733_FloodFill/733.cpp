class Solution {
    public:
        void dfs(vector<vector<int>>& img,int x,int y,int org,int col)
        {
            if(x < 0 || y < 0 || x >= img.size() || y >= img[0].size())
                return;
            
            if(org != img[x][y])
                return;
            
            img[x][y] = col;
    
            dfs(img,x-1,y,org,col);
            dfs(img,x+1,y,org,col);
            dfs(img,x,y+1,org,col);
            dfs(img,x,y-1,org,col);
        }
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            int originalCol = image[sr][sc];
            if(originalCol != color)
                dfs(image,sr,sc,originalCol,color);
            
            return image;
        }
    };