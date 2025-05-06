class Solution {
    public:
        int findCircleNum(vector<vector<int>>& isConnected) {
            int n = isConnected.size();
            int province = 0;
            vector<bool> visited(n,false);
    
            for(int i = 0 ; i < n ; ++i)
            {
                if(!visited[i])
                    {province++;
                    dfs(isConnected,visited,i);}
    
            }
            return province;
        }
    
        void dfs(vector<vector<int>>& isConnected,vector<bool>& visited,int node)
        {
            visited[node] = true;
            for(int n = 0 ; n < isConnected.size() ; n++)
            {
                if(isConnected[node][n] == 1 && !visited[n])
                    dfs(isConnected,visited,n);
            }
    
        }
    };